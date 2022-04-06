#include <iostream>
#include <math.h>
using namespace std;

class A
{
    int a, b, c, s, area;

public:
    void triangle()
    {
        cout << "Enter sides of triangle " << endl;
        cin >> a >> b >> c;
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of triangle " << area << endl;
    }
};

int main()
{
    A obj;
    obj.triangle();
    return 0;
}