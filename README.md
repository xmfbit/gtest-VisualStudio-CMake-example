# gtest-VisualStudio-CMake-example
An example about how to use gtest in Visual Studio environment with CMake.

## Structure
The structure of this project is

ROOT_DIRECTORY

    -- CMakeLists.txt  -- CMake file for the project

    | src  -- which contains a function 'add' which will be tested

      -- add.h  -- the header file

      -- add.cpp  -- implement of 'add'

      -- main.cpp  -- a demo of function 'add'

      -- CMakeLists.txt  -- CMake file for the subdirectory 'src'

    | unit-test  -- which contains the unit-test file and the gtest library

      -- unit-test.cpp  -- where you put the unit tests.

      -- CMakeLists.txt  -- CMake file for the subdirectory 'unit-test'

      | gtest-1.6.0  -- gtest library which has been downloaded

## How to use
This example focuses integrated gtest with Visual Studio using CMake. So I assume that you are in Windows OS. You need to use 'cmake-gui' to configure and generate Visual Studio solution for the project. You can choose whether build unit-test when doing configuration (set 'test' ON or OFF).

Then open the sln file and build the project. To verify that you have successfully build the unit-test, choose 'unit-test' as the start-up item and just press 'Ctrl + F5'.

## Acknowledgement
When I try to complete this example project, I received much help from @dmonopoly, whose repo is [gtest-cmake-example](https://github.com/dmonopoly/gtest-cmake-example/pull/6)
and @weliveindetail, who solved the MSVC's linkage problem. Thanks!
