#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    void fun()
    {
        cout << "Enter value :" << endl;
        cin >> a >> b;
        cout << "Sum = " << a + b << endl;
    }
};
class B : public A
{
    int a, b;

public:
    void fun() // function overriding
    {
        cout << "Enter values : " << endl;
        cin >> a >> b;
        cout << "SUB = " << a - b << endl;
    }
};

int main()
{
    // A *p;
    // B obj;
    // p = &obj;
    // p->fun(); // late binding

    // B ob;
    // ob.A ::fun();

    B ob;
    A &t = ob;
    t.fun();

    return 0;
}