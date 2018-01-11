cmake_minimum_required(VERSION 3.8)
project(OsWet3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES PhysMem.cpp SwapDevice.cpp testProg1.cpp VirtualMemory.h PageTableEntry.h PageTable.h PageTableEntry.h PageTable.cpp PageDirectoryEntry.cpp PageDirectoryEntry.h)
add_executable(OsWet3 ${SOURCE_FILES})