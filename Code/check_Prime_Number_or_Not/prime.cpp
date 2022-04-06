#include <iostream>
using namespace std;

class A
{
    int n, i, count;

public:
    void input()
    {
        cout << "Enter any numbers : " << endl;
        cin >> n;
    }
    void outPut()
    {
        count = 0;
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++; // Befor count = 1, After count = 2
            }
            // cout << count;
        }
        // cout << count; // 2

        if (count == 2)
        {
            cout << "Prime number " << endl;
        }
        else
        {
            cout << "Not prime number " << endl;
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