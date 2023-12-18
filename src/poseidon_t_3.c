#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>
#include "poseidon_t_3_constants.c"

#define SCALAR_FIELD_SIZE \
  "0x30644e72e131a029b85045b68181585d2833e84879b9709143e1f593f0000001"
#define N_ROUNDS_F 8
#define N_ROUNDS_P 57

void mul_mod(mpz_t rop, const mpz_t op1, const mpz_t op2, const mpz_t d) {
  mpz_t temp;
  mpz_init(temp);
  mpz_mul(temp, op1, op2);
  mpz_mod(rop, temp, d);
  mpz_clear(temp);
}

void add_mod(mpz_t rop, const mpz_t op1, const mpz_t op2, const mpz_t d) {
  mpz_t temp;
  mpz_init(temp);
  mpz_add(temp, op1, op2);
  mpz_mod(rop, temp, d);
  mpz_clear(temp);
}

void square_mod(mpz_t rop, const mpz_t x, const mpz_t d) {
  mul_mod(rop, x, x, d);
}

void pow5_mod(mpz_t rop, const mpz_t x, const mpz_t d) {
  mpz_t temp;
  mpz_init(temp);
  square_mod(temp, x, d);
  square_mod(temp, temp, d);
  mul_mod(rop, temp, x, d);
  mpz_clear(temp);
}

void poseidon_t_3(mpz_t rop, mpz_t x, mpz_t y, mpz_t **constants) {
  int t = 3;
  mpz_t scalar_base, zero, accumulator, temp;
  mpz_t state[t];
  mpz_t state_temp[t];

  mpz_init(scalar_base);
  mpz_init(zero);
  mpz_init(accumulator);
  mpz_init(temp);
  for (int i = 0; i < t; i++) {
    mpz_init(state[i]);
    mpz_init(state_temp[i]);
  }

  mpz_set_str(scalar_base, SCALAR_FIELD_SIZE, 0);
  mpz_set_ui(zero, 0);
  mpz_set(state[0], zero);
  mpz_set(state[1], x);
  mpz_set(state[2], y);

  for (int i = 0; i < t; i++) {
    add_mod(state[i], state[i], constants[0][i], scalar_base);
  }

  for (int r = 0; r < ((N_ROUNDS_F/2) - 1); r++) {
    for (int i = 0; i < t; i++) {
      pow5_mod(state[i], state[i], scalar_base);
      add_mod(state[i], state[i], constants[0][((r + 1)*t) + i], scalar_base);
    }
    for (int i = 0; i < t; i++) {
      mpz_set_ui(accumulator, 0);
      for (int j = 0; j < t; j++) {
        mul_mod(temp, state[j], constants[2][(j*M_t_3_size) + i], scalar_base);
        add_mod(accumulator, accumulator, temp, scalar_base);
      }
      mpz_set(state_temp[i], accumulator);
    }
    for (int i = 0; i < t; i++) {
      mpz_set(state[i], state_temp[i]);
    }
  }

  for (int i = 0; i < t; i++) {
    pow5_mod(state[i], state[i], scalar_base);
    add_mod(state[i], state[i],
            constants[C][((N_ROUNDS_F/2)*t) + i], scalar_base);
  }

  for (int i = 0; i < t; i++) {
    mpz_set_ui(accumulator, 0);
    for (int j = 0; j < t; j++) {
      mul_mod(temp, state[j], constants[P][(j*P_t_3_size) + i], scalar_base);
      add_mod(accumulator, accumulator, temp, scalar_base);
    }
    mpz_set(state_temp[i], accumulator);
  }
  for (int i = 0; i < t; i++) {
    mpz_set(state[i], state_temp[i]);
  }

  for (int r = 0; r < N_ROUNDS_P; r++) {
    pow5_mod(temp, state[0], scalar_base);
    add_mod(state[0], temp,
            constants[C][((N_ROUNDS_F/2)+1)*t + r], scalar_base);
    mpz_set_ui(accumulator, 0);
    for (int i = 0; i < t; i++) {
      mul_mod(temp, state[i], constants[S][(((t*2)-1)*r) + i], scalar_base);
      add_mod(accumulator, accumulator, temp, scalar_base);
    }
    for (int k = 1; k < t; k++) {
      mul_mod(temp, state[0], constants[S][(((t*2)-1)*r)+t+k-1], scalar_base);
      add_mod(state[k], state[k], temp, scalar_base);
    }
    mpz_set(state[0], accumulator);
  }

  for (int r = 0; r < ((N_ROUNDS_F/2) - 1); r++) {
    for (int i = 0; i < t; i++) {
      pow5_mod(state[i], state[i], scalar_base);
      add_mod(state[i], state[i],
              constants[C][(((N_ROUNDS_F/2) + 1)*t) + N_ROUNDS_P + (r*t) + i],
              scalar_base);
    }
    for (int i = 0; i < t; i++) {
      mpz_set_ui(accumulator, 0);
      for (int j = 0; j < t; j++) {
        mul_mod(temp, state[j], constants[M][(j*M_t_3_size) + i], scalar_base);
        add_mod(accumulator, accumulator, temp, scalar_base);
      }
      mpz_set(state_temp[i], accumulator);
    }
    for (int i = 0; i < t; i++) {
      mpz_set(state[i], state_temp[i]);
    }
  }

  for (int i = 0; i < t; i++) {
    pow5_mod(state[i], state[i], scalar_base);
  }

  for (int i = 0; i < t; i++) {
    mpz_set_ui(accumulator, 0);
    for (int j = 0; j < t; j++) {
      mul_mod(temp, state[j], constants[2][(j*M_t_3_size) + i], scalar_base);
      add_mod(accumulator, accumulator, temp, scalar_base);
    }
    mpz_set(state_temp[i], accumulator);
  }
  for (int i = 0; i < t; i++) {
    mpz_set(state[i], state_temp[i]);
  }

  mpz_mod(state[0], state[0], scalar_base);
  mpz_set(rop, state[0]);

  mpz_clear(scalar_base);
  mpz_clear(zero);
  mpz_clear(accumulator);
  mpz_clear(temp);
  for (int i = 0; i < t; i++) {
    mpz_clear(state[i]);
    mpz_clear(state_temp[i]);
  }
}

void poseidon_t3_hash(mpz_t rop, char* x_str, char* y_str) {
  mpz_t x, y;
  mpz_t ** constants;

  mpz_init(x);
  mpz_init(y);

  if (mpz_set_str(x, x_str, 0) == -1) goto cleanup;
  if (mpz_set_str(y, y_str, 0) == -1) goto cleanup;

  constants = malloc(4 * sizeof(mpz_t*));
  constants[0] = malloc(C_t_3_size * sizeof(mpz_t));
  constants[1] = malloc(S_t_3_size * sizeof(mpz_t));
  constants[2] = malloc(M_t_3_size * M_t_3_size * sizeof(mpz_t));
  constants[3] = malloc(P_t_3_size * P_t_3_size * sizeof(mpz_t));
  init_t_3(constants);

  poseidon_t_3(rop, x, y, constants);

  clear_t_3(constants);
  free(constants[C]);
  free(constants[S]);
  free(constants[M]);
  free(constants[P]);
  free(constants);

  cleanup:
    mpz_clear(x);
    mpz_clear(y);
}

void poseidon_t_3_hash_chain(mpz_t rop, char** values_str, int length,
                             char * initial_hash_str) {
  mpz_t * xs;
  mpz_t ** constants;
  mpz_t initial_hash;

  mpz_init(initial_hash);

  xs = malloc(length * sizeof(mpz_t));
  for (int i = 0; i < length; i++) {
    mpz_init(xs[i]);
  }

  for (int i = 0; i < length; i++) {
    if (mpz_set_str(xs[i], values_str[i], 0) == -1) goto cleanup;
  }
  if (mpz_set_str(initial_hash, initial_hash_str, 0) == -1) goto cleanup;

  constants = malloc(4 * sizeof(mpz_t*));
  constants[0] = malloc(C_t_3_size * sizeof(mpz_t));
  constants[1] = malloc(S_t_3_size * sizeof(mpz_t));
  constants[2] = malloc(M_t_3_size * M_t_3_size * sizeof(mpz_t));
  constants[3] = malloc(P_t_3_size * P_t_3_size * sizeof(mpz_t));
  init_t_3(constants);

  for (int i = 0; i < length; i++) {
    poseidon_t_3(initial_hash, initial_hash, xs[i], constants);
  }

  mpz_set(rop, initial_hash);

  clear_t_3(constants);
  free(constants[C]);
  free(constants[S]);
  free(constants[M]);
  free(constants[P]);
  free(constants);

  cleanup:
    mpz_clear(initial_hash);
    for (int i = 0; i < length; i++) {
      mpz_clear(xs[i]);
    }
}