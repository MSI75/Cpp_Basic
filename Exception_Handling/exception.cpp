#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;

    try
    {
        if (b == 0)
            throw b;
        else
        {
            c = a / b;
            cout << "Result = " << c << endl;
        }
        catch (int x)
        {
            cout << "Con't devide by " << x;
        }
    }
    return 0;
}