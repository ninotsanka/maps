#include "MyMap.h"

void MyMap::insert(const string& key, int value) {
    for(int i = 0; i < table.size(); i++) {
        for (list<Entry>::iterator it = table[i].begin(); it != table[i].end();) {
            if (it->getKey() == key)
                it->setValue(value);
            else
                ++it;
        }
    }
    //Entry newEntry(key,value);




}

bool MyMap::containsKey(const string& key) {
    for(int i = 0; i < table.size(); i++) {
        for (list<Entry>::iterator it = table[i].begin(); it != table[i].end();) {
            if (it->getKey() == key)
                return true;
            else
                ++it;
        }
    }
    return false;
}

bool MyMap::containsValue(int value) {
    for(int i = 0; i < table.size(); i++) {
        for (list<Entry>::iterator it = table[i].begin(); it != table[i].end();) {
            if (it->getValue() == value)
                return true;
            else
                ++it;
        }
    }
    return false;
}

void MyMap::erase(const string& key) {
    for(int i = 0; i < table.size(); i++) {
        for (list<Entry>::iterator it = table[i].begin(); it != table[i].end();) {
            if (it->getKey() == key)
                it = table[i].erase(it);
            else
                ++it;
        }
    }
}

int MyMap::getValueOf(const string& key) {
    for(int i = 0; i < table.size(); i++) {
        for (list<Entry>::iterator it = table[i].begin(); it != table[i].end();) {
            if (it->getKey() == key)
                return  it->getValue();
            else
                ++it;
        }
    }
    //throw exception
}

int& MyMap::operator[](const string& key) {
}

int MyMap::size() {
    return table.size();
}

bool MyMap::empty() {
    return table.size() == 0;
}

int MyMap::hash(string str) {

}
