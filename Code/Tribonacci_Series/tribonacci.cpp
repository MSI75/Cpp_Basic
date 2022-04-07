#include <iostream>
using namespace std;

class A
{
    int n, a, b, c, d;

public:
    void tribe()
    {
        a = 0;
        b = 1;
        c = 2;
        cout << "Enter the number " << endl;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << a << endl;
            d = a + b + c;
            a = b;
            b = c;
            c = d;
        }
    }
};

int main()
{
    A obj;
    obj.tribe();
    return 0;
}