# gtest-VisualStudio-CMake-example
An example about how to use gtest in Ubuntu with CMake.

## Structure
The structure of this project is

ROOT_DIRECTORY

    -- CMakeLists.txt  -- CMake file for the project

    | src  -- which implements a function 'add' which will be tested

      -- add.h  -- the header file

      -- add.cpp  -- implement of 'add'

      -- CMakeLists.txt  -- CMake file for the subdirectory 'src'

    | unit-test  -- which contains the unit-test file

      -- unit-test.cpp  -- where you put the unit tests.

      -- CMakeLists.txt  -- CMake file for the subdirectory 'unit-test'

## How to use
This example shows how to use gtest with CMake in Ubuntu. To use it, GTest should be installed, which can be found in GitHub repo [googletest](https://github.com/google/googletest).

