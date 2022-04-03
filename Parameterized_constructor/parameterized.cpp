#include <iostream>
using namespace std;

class A
{
private: // optional
    int a, b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
        cout << a << " " << b << ends << a + b << endl;
    }
    void show()
    {
        cout << a << " " << b << ends << a + b << endl;
    }
};

int main()
{
    A obj(10, 20);
    // obj.show();
    return 0;
}