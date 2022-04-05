#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    void input()
    {
        cout << "Enter the two values : " << endl;
        cin >> a >> b;
    }
    void getData()
    {
        if (a > b)
        {
            cout << "Maximum " << a;
        }
        else
        {
            cout << "Maximum " << b;
        }
    }
};

int main()
{
    A obj;
    obj.input();
    obj.getData();
    return 0;
}