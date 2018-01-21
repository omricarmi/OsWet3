//
// Created by compm on 11/01/18.
//

#include "PageTable.h"

int* PageTable::GetPage(unsigned int addr) {
    //TODO extract 10 MSB to get the correct PageDirectoryEntry
    unsigned int pdeNumber = (addr>>22) & 0x3ff;
    //TODO extract next 10 MSB to get the correct PageTableEntry
    unsigned int pteNumber = (addr>>12) & 0x3ff;
    //TODO get the page from the PDE
    if(mPDEList.[pdeNumber] != nullptr) {
        return mPDEList[pdeNumber]->get_page_address(pteNumber);
    }else{
        //TODO allocate new PDE
        mPDEList[pdeNumber] = new PageDirectoryEntry();
        //TODO get phys adrr
        int* physicalAddr = mVirtualMemory.GetFreeFrame();
        //TODO impl
        mPDEList[pdeNumber]->SetPage(pteNumber,physicalAddr);
        //finally return the physical address
        return  physicalAddr;
    }
}

void PageTable::initPDEList() {
    for (int i = 0; i < PTE_AMOUNT; ++i) {
        mPDEList[i] = nullptr;
    }
}
