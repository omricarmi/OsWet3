//
// Created by compm on 11/01/18.
//

#pragma once
#include “PageDirectoryEntry.h”
class VirtualMemory; //You will probably want to include this in PageTable.cpp
class PageTable
{
public:
//Your Constructor (and Destructor if you need one) should go here
    int* GetPage (unsigned int adr);
private:
//Fill the class with the necessary member variables
};