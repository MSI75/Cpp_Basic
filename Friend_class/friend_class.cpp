#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    void input()
    {
        cout << "The value of two numbers : " << endl;
        cin >> a >> b;
    }
    friend class B;
};

class B
{
    int c;

public:
    void add(A ob)
    {
        c = ob.a + ob.b;
        cout << "Sum = " << c << endl;
    }
};

int main()
{
    A ob;
    B obj;
    ob.input();
    obj.add(ob);
    return 0;
}