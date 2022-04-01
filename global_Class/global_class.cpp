#include <iostream>
using namespace std;

// Global Class

class A
{
    // private: // not allow
protected:
    int a, b;

public:
    void show()
    {
        cout << "Enter two value : " << endl;
        cin >> a >> b;
        cout << a << " " << b << endl;
    }
};

class B : public A
{
public:
    void dis()
    {
        cout << a << " " << b;
    }
};

int main()
{
    // A obj;
    B obj2;
    obj2.show();
    obj2.dis();
    return 0;
}