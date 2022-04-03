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
    }
    A(A &ref)
    {
        a = ref.a;
        b = ref.b;
        // cout << a << " " << b << endl;
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
};

int main()
{
    A obj(12, 15);
    A obj1 = obj;
    obj.show();
    obj1.show();
    return 0;
}