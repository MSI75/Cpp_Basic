#include <iostream>
using namespace std;

class A
{
    int a, b, c;

public:
    void input()
    {
        cout << "Enter any three numbers : " << endl;
        cin >> a >> b >> c;
    }
    void great()
    {
        if (a > b)
        {
            if (a > c)
            {
                cout << "Greatest : " << a;
            }
            else
            {
                cout << "Greatest : " << c;
            }
        }
        else
        {
            if (b > c)
            {
                cout << "Greatest : " << b;
            }
            else
            {
                cout << "Greatest : " << c;
            }
        }
    }
};

int main()
{
    A obj;
    obj.input();
    obj.great();
    return 0;
}