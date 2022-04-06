#include <iostream>
using namespace std;

class A
{
    int i, n;

public:
    void input()
    {
        cout << "Enter the number : " << endl;
        cin >> n;
    }
    void outPut()
    {
        for (i = 0; i <= n; i++)
        {
            cout << i << endl;
        }
    }
};

int main()
{
    A obj;
    obj.input();
    obj.outPut();
}