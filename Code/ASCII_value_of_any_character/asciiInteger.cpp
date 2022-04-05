#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void input()
    {
        cout << "Enter any integer value : " << endl;
        cin >> a;
    }
    void outPut()
    {
        cout << "Integer value of " << a << " is " << (char)a << endl;
    }
};

int main()
{
    A obj;
    obj.input();
    obj.outPut();
    return 0;
}