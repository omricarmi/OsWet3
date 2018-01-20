//
// Created by compm on 11/01/18.
//

#ifndef OSWET3_PAGEDIRECTORYENTRY_H
#define OSWET3_PAGEDIRECTORYENTRY_H

#include <vector>
#include "PageTableEntry.h"

using namespace std;

class PageDirectoryEntry {

public:
    PageDirectoryEntry(){}
    void initPTEList();
    bool isPTEListEmpty();
    void setPTE(unsigned int pteNumber,int* addr);
    bool isValidPTE(unsigned int pteNumber);
    void setValidPTE(unsigned int pteNumber,bool isValid);
    int* GetPage(unsigned int pteNumber);

private:
    vector<PageTableEntry*> mPTEList;
};


#endif //OSWET3_PAGEDIRECTORYENTRY_H
