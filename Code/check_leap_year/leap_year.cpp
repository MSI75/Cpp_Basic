#include <iostream>
using namespace std;

class A
{
    int y;

public:
    void input()
    {
        cout << "Enter years :" << endl;
        cin >> y;
    }
    void show()
    {
        if ((y % 400 == 0 && y % 100 == 0) || (y % 4 == 0 && y % 100 != 0))
        {
            cout << "leap year !";
        }
        else
        {
            cout << "Not leap year !";
        }
    }
};

int main()
{
    A obj;
    obj.input();
    obj.show();
    return 0;
}