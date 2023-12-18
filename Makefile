all : gmp/package/lib/libgmp.a build

gmp/package/lib/libgmp.a:
	./build_gmp.sh host

build:
	python -m venv venv
	. ./venv/bin/activate && python setup.py build_ext
	. ./venv/bin/activate && pip install .
	. ./venv/bin/activate && pip install pytest

test:
	. ./venv/bin/activate && pytest test/test_poseidon.py

clean:
	rm -rf ./build
	rm -rf ./venv
	rm -rf PyseidonT3.egg-info
	rm *.tar.xz

.PHONY : all clean build test
