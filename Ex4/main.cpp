#include <iostream>
#include <boost/shared_ptr.hpp>

using namespace std;

int main()
{
    boost::shared_ptr<int> aa(new int(40));
    cout << "Number of boost::shared_ptrs: " << aa.use_count() << endl;
    cout << "Value of aa is: " << *aa << " and it points to address: " << aa << endl << endl;

    boost::shared_ptr<int> bb(aa);
    cout << "Number of boost::shared_ptrs: " << bb.use_count() << endl;
    cout << "Value of bb is: " << *bb << " and it points to address: " << bb << endl << endl;

    {
        cout << "Scope entered" << endl;
        boost::shared_ptr<int> cc;
        cc = bb;
        cout << "Number of boost::shared_ptrs: " << cc.use_count() << endl;
        cout << "Value of cc is: " << *cc << " and it points to address: " << cc << endl;
    }
    cout << "Scope ended" << endl << endl;

    cout << "Number of boost::shared_ptrs: " << bb.use_count() << endl;
    cout << "Value of bb is: " << *bb << " and it points to address: " << bb << endl;

    return 0;
}

