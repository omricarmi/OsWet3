//
// Created by compm on 11/01/18.
//

#include <cassert>
#include "PageTable.h"

int* PageTable::GetPage(unsigned int adr) {
    //TODO extract 10 MSB to get the correct PageDirectoryEntry
    unsigned int pdeNumber = (adr>>22) & 0x3ff;
    //TODO extract next 10 MSB to get the correct PageTableEntry
    unsigned int pteNumber = (adr>>12) & 0x3ff;
    //TODO get the page from the pde
    if(!mDirList.[pdeNumber].IsEmpty()) {
        mDirList[pdeNumber].GetPage(pteNumber);
    }else{
        //TODO allocate new PTE in the PDE

    }
}

void PageTable::initPageDirectory() {
    for (int i = 0; i < NUMBEROFFRAMES; ++i) {

    }
}
