//
// Created by compm on 11/01/18.
//

#pragma once

#include <vector>
#include "PageDirectoryEntry.h"
using namespace std;

#define PDE_AMOUNT 1024
#define PTE_AMOUNT 1024

class VirtualMemory; //You will probably want to include this in PageTable.cpp
class PageTable
{
public:
//Your Constructor (and Destructor if you need one) should go here
    PageTable(VirtualMemory& virtualMemory):mVirtualMemory(virtualMemory){
        initPDEList();
    }
    ~PageTable(){
        //TODO impl
    }
    int* GetPage (unsigned int addr);
private:
//Fill the class with the necessary member variables
    vector<PageDirectoryEntry*> mPDEList;
    VirtualMemory& mVirtualMemory;
    void initPDEList();
};