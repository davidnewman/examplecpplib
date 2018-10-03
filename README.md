# examplecpplib

This repository provides an example of how to layout a simple C++ library. The library is build using CMake and includes the [Catch2](https://github.com/catchorg/Catch2) library for unit testing.

There is a README.md file in each directory that explains briefly what the should be stored in the directory.

# Building

To build this library you will need a somewhat recent version of CMake installed. I've tested it with CMake version 3.12.2, but it should work with most versions of CMake installed by your operating system's package manager.

First, you need to fetch the repository:

    git clone https://github.com/davidnewman/examplecpplib.git
    
Next, grab any sub-modules:

    git submodule update --init --recursive

Finally, you can use make to build the code and run the unit tests:

    make test

After running the build, you should notice a directory named `artifacts`. This directory is where CMake places all of it's generated code as well as binary output. For example, you can run the example application like:

    ./artifacts/examples/factorial/factorial 6

You can clean up using make:

    make clean
