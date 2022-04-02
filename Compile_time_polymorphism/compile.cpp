#include <iostream>
using namespace std;

class A
{
    float a, b;

public:
    void show(int x, int y)
    {
        a = x;
        b = y;
        cout << a << " " << b << endl;
    }
    void show(float x, float y)
    {
        a = x;
        b = y;
        cout << a << " " << b << endl;
    }
};

int main()
{
    A obj, obj1;
    obj.show(10, 20);
    obj1.show(75.2f, 25.3f);
    return 0;
}