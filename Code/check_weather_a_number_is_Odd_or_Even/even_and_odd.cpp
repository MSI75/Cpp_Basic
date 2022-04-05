#include <iostream>
using namespace std;

class A
{
    int n;

public:
    void input()
    {
        cout << "Enter any number :" << endl;
        cin >> n;
    }
    void outPut()
    {
        if (n % 2 == 0)
        {
            cout << "Even number " << endl;
        }
        else
        {
            cout << "Odd number " << endl;
        }
    }
};

int main()
{
    A obj;
    obj.input();
    obj.outPut();
    return 0;
}