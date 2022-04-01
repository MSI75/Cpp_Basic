#include <iostream>
using namespace std;

// Nested Class

class A
{
public:
    // int a, b; // not allow
    class B
    {
        int a, b;

    public:
        void input()
        {
            cout << "Enter the two value : " << endl;
            cin >> a >> b;
        }
        void show()
        {
            cout << a << " " << b;
        }
    };
};

int main()
{
    A ::B obj;
    obj.input();
    obj.show();
    return 0;
}