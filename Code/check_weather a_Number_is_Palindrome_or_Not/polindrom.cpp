#include <iostream>
using namespace std;

class A
{
    int n, c, r, s;

public:
    void input()
    {
        cout << "Enter any number " << endl;
        cin >> n;
    }
    void outPut()
    {
        c = n;
        s = 0;
        while (n > 0)
        {
            r = n % 10;
            s = (s * 10) + r;
            n = n / 10;
        }
        if (c == s)
        {
            cout << "Palindrom number ";
        }
        else
        {
            cout << "Not palindrom number ";
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