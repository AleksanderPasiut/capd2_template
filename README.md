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

Above commands will build a CAPD library and an example executable.
