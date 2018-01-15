//
// Created by compm on 15/01/18.
//

#include "OurPointer.h"

OurPointer::OurPointer(int adr, VirtualMemory *vrtlMem) {

}

int &OurPointer::operator*() {
    return <#initializer#>;
}

OurPointer &OurPointer::operator++() {
    return <#initializer#>;
}

OurPointer OurPointer::operator++(int) {
    return OurPointer(0, nullptr);
}
