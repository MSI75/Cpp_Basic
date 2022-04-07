#include <iostream>
using namespace std;

class A
{
    int l, b, area;

public:
    void rectangle()
    {
        cout << "Enter length and base rectangle " << endl;
        cin >> l >> b;
        area = l * b;
        cout << "Area of rectangle " << area << endl;
    }
};

int main()
{
    A obj;
    obj.rectangle();
    return 0;
}