//
// Created by compm on 11/01/18.
//
#pragma once
class PageTableEntry
{
public:
//Your Constructor (and Destructor if you need one) should go here
    PageTableEntry():mFramePtr(nullptr),mIsValid(false){}
    PageTableEntry(int* framePtr,bool isValid):mFramePtr(framePtr),mIsValid(isValid){}
    int* get_page_address(); //Pointer to beginning of frame
    void set_page_address(int* adr); //Set the pointer to a frame
    bool is_valid(); //Returns whether the entry is valid
    void set_valid(bool valid); //Allows to set whether the entry is valid
private:
//todo Fill the class with the necessary member variables
    int* mFramePtr;
    bool mIsValid;
};