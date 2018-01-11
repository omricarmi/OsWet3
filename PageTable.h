//
// Created by compm on 11/01/18.
//

#pragma once

#include <vector>
#include "PageDirectoryEntry.h"
using namespace std;

#define PAGEDIR_ENTRIES_AMOUNT 1024
#define PAGETABLE_ENTRIES 1024

class VirtualMemory; //You will probably want to include this in PageTable.cpp
class PageTable
{
public:
//Your Constructor (and Destructor if you need one) should go here
    PageTable(VirtualMemory& virtualMemory):mVirtualMemory(virtualMemory){
        initPageDirectory();
    }
    int* GetPage (unsigned int adr);
private:
//Fill the class with the necessary member variables
    vector<PageDirectoryEntry> mDirList;
    VirtualMemory& mVirtualMemory;

    void SetPage (unsigned int index);
    void initPageDirectory();
};