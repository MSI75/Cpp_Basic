#include <iostream>
using namespace std;

class A
{
    int n;

public:
    void input()
    {
        cout << "Enter any number " << endl;
        cin >> n;
    }
    void output()
    {
        if (n % 7 == 0 || n % 10 == 7)
        {
            cout << "Buzz number " << endl;
        }
        else
        {
            cout << "Not Buzz number " << endl;
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