#include <iostream>
using namespace std;

class A
{
    char ch;

public:
    void input()
    {
        cout << "Enter any characters :" << endl;
        cin >> ch;
    }
    void outPut()
    {
        cout << "ASCII value of " << ch << " is " << (int)ch << endl;
    }
};

int main()
{
    A obj;
    obj.input();
    obj.outPut();
    return 0;
}