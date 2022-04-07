#include <iostream>
using namespace std;

class A
{
    int a, b, c, ch;

public:
    void calculator()
    {
        cout << "Enter any numbers : " << endl;
        cin >> a >> b;
        cout << "Operetion number ; " << endl;
        cin >> ch;

        if (ch == 1)
        {
            c = a + b;
            cout << "Addition number " << ends << c;
        }
        else if (ch == 2)
        {
            c = a - b;
            cout << "Subtraction number " << ends << c;
        }
        else if (ch == 3)
        {
            c = a * b;
            cout << "Multiplication number " << ends << c;
        }
        else if (ch == 4)
        {
            c = a / b;
            cout << "Division number " << ends << c;
        }
        else
        {
            cout << "invalid number " << endl;
        }
    }
};

int main()
{
    A obj;
    obj.calculator();
    return 0;
}