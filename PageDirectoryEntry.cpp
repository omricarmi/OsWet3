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
    //TODO impl
}

bool PageDirectoryEntry::isPTEListEmpty() {
    //TODO impl
    return false;
}

void PageDirectoryEntry::setPTE(unsigned int pteNumber, int *addr) {
    //TODO impl
}

bool PageDirectoryEntry::isValidPTE(unsigned int pteNumber) {
    //TODO impl
    return false;
}

void PageDirectoryEntry::setValidPTE(unsigned int pteNumber, bool isValid) {
    //TODO impl
}
