#include <iostream>
using namespace std;

class A
{
    int a, b, c;

public:
    void input()
    {
        cout << "Enter the number of a and b :" << endl;
        cin >> a >> b;
    }
    void outPut()
    {
        cout << "Before swap number of a :" << a << endl;
        cout << "Before swap number of b :" << b << endl
             << endl;
        c = a;
        a = b;
        b = c;
        cout << "swap number of a " << a << endl
             << "swap number of b " << b << endl;
    }
};

int main()
{
    A obj;
    obj.input();
    obj.outPut();
    return 0;
}