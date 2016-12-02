#ifndef MY_MAP_H
#define MY_MAP_H

#include "Entry.h"
#include <list>
#include <vector>

//using namespace std;

class MyMap{
private:
    vector<list<Entry> > table;
public:
    void insert (const string& key, int value);
    bool containsKey(const string& key);
    bool containsValue(int value);
    void erase (const string& key);
    int getValueOf(const string& key);
    int& operator [] (const string& key);
    int size();
    bool empty();
    int hash(string str);


};


#endif //MY_MAP_H
