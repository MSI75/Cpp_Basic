#include <iostream>
using namespace std;

class A
{
    int n, i, f;

public:
    void factorial()
    {
        f = 1;
        cout << "Enter any number " << endl;
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            f = f * i;
        }
        cout << "Factorial number " << f << endl;
    }
};

int main()
{
    A obj;
    obj.factorial();
    return 0;
}