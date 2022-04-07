#include <iostream>
using namespace std;

class A
{
    int n, a, b, c;

public:
    void fib()
    {
        a = 0;
        b = 1;
        cout << "Enter the number " << endl;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << a << endl;
            c = a + b;
            a = b;
            b = c;
        }
    }
};

int main()
{
    A obj;
    obj.fib();
    return 0;
}