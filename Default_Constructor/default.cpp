#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A()
    {
        a = 100;
        cout << a << endl;
    }
};

int main()
{
    A obj;
    return 0;
}