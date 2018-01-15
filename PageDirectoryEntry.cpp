//
// Created by compm on 11/01/18.
//

#include "PageDirectoryEntry.h"
#include "PageTable.h"

int *PageDirectoryEntry::GetPage(unsigned int pteNumber) {
    //TODO impl
    return nullptr;
}

void PageDirectoryEntry::initPTEList() {
    for (int i = 0; i < PTE_AMOUNT; ++i) {
        mPTEList[i] = nullptr;
    }
}
