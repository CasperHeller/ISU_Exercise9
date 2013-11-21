#include <iostream>
#include <string>
#include "SmartString.h"

using namespace std;

int main()
{
    SmartString<string> ss(new string("Hello world"));
    cout << "Number of SmartStrings<string>: " << ss.getCount() << endl;

    SmartString<string> ss2 = ss;
    cout << "Number of SmartStrings<string>: " << ss2.getCount() << endl;

    SmartString<int> ss3(new int(7));
    cout << "Number of SmartStrings<int>: " << ss3.getCount() << endl;

    {
        cout << "Scope entered" << endl;
        SmartString<int> ss4(ss3);
        cout << "Number of SmartStrings<int>: " << ss3.getCount() << endl;
    }
    cout << "Scope ended" << endl;
    cout << "Number of SmartStrings<int>: " << ss3.getCount() << endl;

    return 0;
}

