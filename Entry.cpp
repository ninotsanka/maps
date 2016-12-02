#include "Entry.h"


Entry::Entry(const string &key, int value):key(key), value(value){}

string Entry::getKey() {
    return key;
}

int& Entry::getValue() {
    return value;
}

void Entry::setValue(int value) {
    this->value = value;
}
