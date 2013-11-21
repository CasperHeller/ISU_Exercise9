#include "SmartString.h"

SmartString::SmartString(string* str) : str_(str)
{
    counter_ = new unsigned int;
    ++*counter_;
}

SmartString::~SmartString()
{
    --*counter_;

    if(*counter_ <= 0)
    {
        delete str_;
        delete counter_;
    }
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

SmartString::SmartString(const SmartString& other) : str_(other.str_), counter_(other.counter_)
{
    ++*counter_;
}

SmartString& SmartString::operator=(const SmartString& other)
{
    if(this != &other)
    {
         counter_ = other.counter_;
         ++*counter_;

         str_ = other.str_;
    }

    return *this;
}
