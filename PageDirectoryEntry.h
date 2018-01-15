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
    PageDirectoryEntry(){
        initPTEList();
    }
    ~PageDirectoryEntry(){
        //TODO impl
    }
    int* GetPage(unsigned int pteNumber);
private:
    vector<PageTableEntry*> mPTEList;
    void initPTEList();
};


#endif //OSWET3_PAGEDIRECTORYENTRY_H
