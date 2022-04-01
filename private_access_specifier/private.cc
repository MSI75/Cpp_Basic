/* private --------> 1. Member of class
                  2. Friend */

#include <iostream>
using namespace std;

class A
{
private:
    int a, b;

public:
    void show()
    {
        a = 10, b = 20;
        cout << a << " " << b << endl;
    }
    friend class B; // class
};

class B
{
public:
    void disp(A ref)
    {
        ref.a = 30, ref.b = 75;
        cout << ref.a << " " << ref.b;
    }
};

int main()
{
    A obj;
    B obj1;
    obj.show();
    obj1.disp(obj);
}