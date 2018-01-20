//
// Created by compm on 11/01/18.
//
#include "PageTableEntry.h"

int *PageTableEntry::get_page_address() {
    return mFramePtr;
}

void PageTableEntry::set_page_address(int *adr) {
    mFramePtr = adr;
}

bool PageTableEntry::is_valid() {
    return mIsValid;
}

void PageTableEntry::set_valid(bool valid) {
    mIsValid = valid;
}
