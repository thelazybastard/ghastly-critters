.PHONY: build run clean

build:
	@cmake -B build -G Ninja

run:
	@cmake --build build && ./build/gc

clean:
	@rm -rf build