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
private:
    string* str_;
    SmartString(const SmartString& other) {}
    SmartString& operator=(const SmartString& other) {}
};
