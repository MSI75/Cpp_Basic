#include <iostream>
using namespace std;

class A
{
    char ch;

public:
    void input()
    {
        cout << "Enter any character " << endl;
        cin >> ch;
    }
    void outPut()
    {
        // if (ch >= 'a' && ch <= 'z')
        if (ch >= 97 && ch <= 122)
        {
            ch = ch - 32;
            cout << ch;
        }
        else
        {
            ch = ch + 32;
            cout << ch;
        }
    }
};

int main()
{
    A obj;
    obj.input();
    obj.outPut();
}