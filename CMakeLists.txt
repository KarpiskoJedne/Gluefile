cmake_minimum_required(VERSION 3.15)
project(gluefile C CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(gluefile
        source/main.cpp
        source/cli.c
        include/cli.h
        include/commands/commands.h
        include/commands/help.h
        source/commands/help.cpp
        include/commands/command.h
)