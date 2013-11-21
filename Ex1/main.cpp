#include <iostream>
#include <string>
#include "SmartString.h"

using namespace std;

int main()
{
    SmartString ss(new string("Hello world"));
    cout << "String length: " << ss->length() << endl;

    if(ss->find("world") != string::npos)
        cout << "The 'ss' string does containt 'world'" << endl;
    else
        cout << "The 'ss' string does NOT contain 'world'" << endl;

    //SmartString ss2 = ss;

    return 0;
}

