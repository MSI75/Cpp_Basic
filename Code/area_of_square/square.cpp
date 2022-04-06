#include <iostream>
using namespace std;

class A
{
    float s, area;

public:
    void square()
    {
        cout << "Enter sides of square " << endl;
        cin >> s;
        area = s * s;
        cout << "Area of square " << area << endl;
    }
};

int main()
{
    A obj;
    obj.square();
    return 0;
}