all : gmp/package/lib/libgmp.a build

gmp/package/lib/libgmp.a:
	./build_gmp.sh host

venv/bin/activate:
	python -m venv venv
	. venv/bin/activate && pip install --upgrade pip

build: gmp/package/lib/libgmp.a venv/bin/activate
	. venv/bin/activate && pip install .
	. venv/bin/activate && pip install pytest

test:
	. venv/bin/activate && pytest test/test_poseidon.py

clean:
	rm -rf ./build
	rm -rf ./venv
	rm -rf ./gmp
	rm -rf PyseidonT3.egg-info

.PHONY : all clean build test
