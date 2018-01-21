//
// Created by compm on 11/01/18.
//

#include "PageDirectoryEntry.h"
#include "PageTable.h"

void PageDirectoryEntry::initPTEList() {
    for (int i = 0; i < PTE_AMOUNT; ++i) {
        mListPTE.push_back(PageTableEntry());
    }
}

void PageDirectoryEntry::setPTE(unsigned int pteNumber, int *addr) {
    mListPTE[pteNumber].set_page_address(addr);
    mListPTE[pteNumber].set_valid(true);
}

int *PageDirectoryEntry::get_page_address(unsigned int pteNumber) {
    if(mListPTE[pteNumber].is_valid()){
        return mListPTE[pteNumber].get_page_address();
    }
    return nullptr;
}

bool PageDirectoryEntry::isPTEListEmpty() {
    return mListPTE.empty();
}

bool PageDirectoryEntry::isValidPTE(unsigned int pteNumber) {
    return mListPTE[pteNumber].is_valid();
}

void PageDirectoryEntry::setValidPTE(unsigned int pteNumber, bool isValid) {
    mListPTE[pteNumber].set_valid(isValid);
}
