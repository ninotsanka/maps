#ifndef ENTRY_H
#define ENTRY_H

#include <string>

using namespace std;

class Entry{
private:
    int value;
    string key;
public:
    Entry(const string& key, int value=0);
    string getKey();
    int& getValue();
    void setValue(int value);

};

#endif //ENTRY_H
