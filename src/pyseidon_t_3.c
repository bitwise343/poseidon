#include <Python.h>
#include "poseidon_t_3.c"

static PyObject * pyseidon_t_3_hash(PyObject * module, PyObject * args) {
  char * x_str=NULL;
  char * y_str=NULL;
  char * result_str;
  mpz_t result;

  if (!PyArg_ParseTuple(args, "ss", &x_str, &y_str))
    return NULL;

  mpz_init(result);

  poseidon_t3_hash(result, x_str, y_str);

  result_str = mpz_get_str(NULL, 10, result);

  mpz_clear(result);

  return Py_BuildValue("s", result_str);
}

static PyObject * pyseidon_t_3_hash_chain(PyObject * module, PyObject * args) {
  PyObject* xs_str_pylist;
  char** xs_str;
  char * initial_hash;
  Py_ssize_t n, i;
  char * result_str;
  mpz_t result;

  if (!PyArg_ParseTuple(args, "Os", &xs_str_pylist, &initial_hash)) {
      return NULL;
  }

  if (!PyList_Check(xs_str_pylist)) {
      PyErr_SetString(PyExc_TypeError, "Argument must be a list");
      return NULL;
  }

  n = PyList_Size(xs_str_pylist);

  xs_str = (char**)malloc(n * sizeof(char*));
  if (xs_str == NULL) {
      PyErr_SetString(PyExc_MemoryError, "Failed to allocate memory");
      return NULL;
  }

  for (i = 0; i < n; i++) {
      PyObject* item = PyList_GetItem(xs_str_pylist, i);
      if (!PyUnicode_Check(item)) {
          PyErr_SetString(PyExc_TypeError, "List items must be strings");
          free(xs_str);
          return NULL;
      }

      xs_str[i] = strdup(PyUnicode_AsUTF8(item));
  }

  mpz_init(result);

  poseidon_t_3_hash_chain(result, xs_str, (int)n, initial_hash);

  result_str = mpz_get_str(NULL, 10, result);

  mpz_clear(result);

  for (i = 0; i < n; i++) {
      free(xs_str[i]);
  }
  free(xs_str);

  return Py_BuildValue("s", result_str);
}

static PyMethodDef pyseidon_t3_methods[] = {
  {
    "poseidon_hash",
    (PyCFunction)pyseidon_t_3_hash,
    METH_VARARGS,
    "compute the poseidon hash of (x, y)"
  },
  {
    "poseidon_hash_chain",
    (PyCFunction)pyseidon_t_3_hash_chain,
    METH_VARARGS,
    "compute the poseidon hash chain of (values, initial_hash)"
  },
  {NULL, NULL, 0, NULL}
};

static struct PyModuleDef pyseidon_t3_definition = {
  PyModuleDef_HEAD_INIT,
  "pyseidon_t3",
  "A Python module that interface to the poseidon hash function using libgmp",
  -1,
  pyseidon_t3_methods,
  NULL, NULL, NULL, NULL
};

PyMODINIT_FUNC PyInit_pyseidon_t3(void) {
  return PyModule_Create(&pyseidon_t3_definition);
}