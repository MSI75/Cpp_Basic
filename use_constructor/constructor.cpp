#include <iostream>
using namespace std;

class A
{
    // private: // optional
public:
    int a;

    // constructor
    A()
    {
        a = 100;
    }

    void show()
    {
        cout << a << endl;
    }
};

int main()
{
    A obj = A();
    obj.show();
    return 0;
}