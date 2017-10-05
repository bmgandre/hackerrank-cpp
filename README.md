# Hackerrank solutions in C++

This repository contains some Hackerrank solutions in C++.

## Requirements
- c++14 compiler
  - clang >= 3.4
  - gcc >= 4.9
  - msvc >= 19 (Visual Studio 2015)
- cmake >= 3.1
- Google Test (GTest) >= 1.7
- Conan (optional for building deps)

## Building

``` bash
cd hackerrank-cpp
mkdir build
cd build
cmake ..
make
```

## Running tests

First build and then:

``` bash
make test
```

## Adding a new problem

Go to project root folder and run setup-new-problem script:

```bash
cd hackerrank-cpp
sh scripts/setup-new-problem -n algorithms::implementation::diagonal_difference
```

This will create the following directory structure:

```
hackerrank-cpp
|-- src
|   |-- CMakeLists.txt
|   +-- algorithms
|       |-- CMakeLists.txt
|       +-- implementation
|           |-- CMakeLists.txt
|           +-- diagonal_difference
|               |-- diagonal_difference.cpp
|               |-- diagonal_difference.h
|               +-- CMakeLists.txt
+-- test
    |-- CMakeLists.txt
    +-- algorithms
        |-- CMakeLists.txt
        +-- implementation
            |-- CMakeLists.txt
            +-- diagonal_difference
                |-- diagonal_difference_test.cpp
                +-- CMakeLists.txt
```
