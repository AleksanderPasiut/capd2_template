# CAPD2 template
Template for CAPD2-based project

## Prerequisites

In order to build the software it is necessary to have git and cmake tools installed along with a c++ compiler.

## Getting started

Clone the repository:

    git clone https://github.com/AleksanderPasiut/capd2_template
    
Enter the repository, update submodules, create the build folder, configure the repository and then build:

    cd capd2_template
    git submodule update --init --recursive
    mkdir build
    cd build
    cmake ..
    make

Above commands will build the library only without tests or examples. Krak component also will not be built. In order to build krak, it is necessary to append `-DBUILD_KRAK=true` option when calling `cmake` command. In order to build examples, it is necessary to append `-DBUILD_EXAMPLE_EXECUTABLES=true` option when calling `cmake` command. In order to build and launch tests, look into section "Building and executing tests".

## Building and executing tests

In order to build and execute tests, it necessary to run `cmake` command with option `-DBUILD_TEST_EXECUTABLES=true`, then build the tests and execute them with commands:

    make
    make tests
   
when in `capd2/build` directory.
