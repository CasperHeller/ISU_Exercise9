#include "SmartString.h"

SmartString::SmartString(string* str) : str_(str)
{

}

SmartString::~SmartString()
{
    delete str_;
}

string* SmartString::get() const
{
    return str_;
}

string* SmartString::operator->()
{
    return str_;
}

string& SmartString::operator*()
{
    return *str_;
}
