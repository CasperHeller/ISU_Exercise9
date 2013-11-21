#pragma once

#include <string>

using namespace std;

class SmartString
{
public:
    SmartString(string* str);
    ~SmartString();
    string* get() const;
    string* operator->();
    string& operator*();
    SmartString(const SmartString& other);
    SmartString& operator=(const SmartString& other);
    int getCount()
    {
        return *counter_;
    }

private:
    string* str_;
    unsigned int* counter_;
};
