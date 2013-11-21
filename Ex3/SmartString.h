#pragma once

using namespace std;

template <class T>
class SmartString
{
public:
    SmartString(T* str) : t_(str)
    {
        counter_ = new unsigned int;
        ++*counter_;
    }

    ~SmartString()
    {
        --*counter_;

        if(*counter_ <= 0)
        {
            delete t_;
            delete counter_;
        }
    }

    T* get() const
    {
        return t_;
    }

    T* operator->()
    {
        return t_;
    }

    T& operator*()
    {
        return *t_;
    }

    SmartString(const SmartString& other) : t_(other.t_), counter_(other.counter_)
    {
        ++*counter_;
    }

    SmartString& operator=(const SmartString& other)
    {
        if(this != &other)
        {
             counter_ = other.counter_;
             ++*counter_;

             t_ = other.t_;
        }

        return *this;
    }

    int getCount()
    {
        return *counter_;
    }

private:
    T* t_;
    unsigned int* counter_;
};
