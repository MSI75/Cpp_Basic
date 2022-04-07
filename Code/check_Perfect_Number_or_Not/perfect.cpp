#include <iostream>
using namespace std;

class A
{
    int n, i, sum;

public:
    void input()
    {
        cout << "Enter any number :" << endl;
        cin >> n;
    }
    void output()
    {
        sum = 0;
        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == n)
        {
            cout << "Perfect number " << endl;
        }
        else
        {
            cout << "Not perfect number " << endl;
        }
    }
};

int main()
{
    A obj;
    obj.input();
    obj.output();
    return 0;
}