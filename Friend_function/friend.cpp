#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    void input()
    {
        cout << "Enter the two values : " << endl;
        cin >> a >> b;
    }
    friend void add(A ob);
};

void add(A ob)
{
    int c;
    c = ob.a + ob.b;
    cout << "Sum = " << c << endl;
}

int main()
{
    A obj;
    obj.input();
    add(obj);
    return 0;
}