/* public ---------> 1. inside
                  2. outside */

#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void show();
    // void show()
    // {
    //     a = 10;
    //     cout << "Inside class " << a << endl;
    // }
};

void A ::show()
{
    a = 10;
    cout << "Out side class" << a << endl;
}

int main()
{
    A obj;
    obj.show();
    obj.a = 75;
    cout << "Out side class " << obj.a << endl;
}
