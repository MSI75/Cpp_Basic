#include <iostream>
#include <Math.h>
using namespace std;

class A
{
    int n, i, s, p;

public:
    void perfect()
    {
        cout << "Enter any number :" << endl;
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            s = sqrt(i * i);
            p = s * i;
            cout << p << endl;
        }
    }
};

int main()
{
    A obj;
    obj.perfect();
    return 0;
}