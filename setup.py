from setuptools import setup, Extension

extension_mod = Extension(
    "pyseidon_t3",
    sources=["src/pyseidon_t_3.c"],
    include_dirs=["gmp/package/lib"],
    extra_link_args=["gmp/package/lib/libgmp.a"],
)

setup(
    name="PyseidonT3",
    ext_modules=[extension_mod],
)