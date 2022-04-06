#include <iostream>
using namespace std;

class A
{
    char ch;

public:
    void input()
    {
        cout << "Enter any characters : " << endl;
        cin >> ch;
    }
    void outPut()
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cout << "vowel : " << ch << endl;
        }
        else
        {
            cout << "Consonant : " << ch << endl;
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