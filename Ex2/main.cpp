#include <iostream>
#include <string>
#include "SmartString.h"

using namespace std;

int main()
{
    SmartString ss(new string("Hello world"));
    cout << "Number of SmartStrings: " << ss.getCount() << endl;

    SmartString ss2 = ss;
    cout << "Number of SmartStrings: " << ss.getCount() << endl;

    SmartString ss3(ss);
    cout << "Number of SmartStrings: " << ss.getCount() << endl;

    {
        cout << "Scope entered" << endl;
        SmartString ss4(ss3);
        cout << "Number of SmartStrings: " << ss.getCount() << endl;
    }
    cout << "Scope ended" << endl;

    cout << "Number of SmartStrings: " << ss.getCount() << endl;

    return 0;
}

