#include <iostream>
using namespace std;

class A
{
    float r, area;

public:
    void are()
    {
        cout << "Enter radius of circale :" << endl;
        cin >> r;
        area = 3.1416 * r * r;
        cout << area;
    }
};

int main()
{
    A obj;
    obj.are();
    return 0;
}