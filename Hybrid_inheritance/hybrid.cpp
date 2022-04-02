#include <iostream>
using namespace std;

class A
{
private:
    int n;

public:
    void input()
    {
        cout << "Enter the number : " << endl;
        cin >> n;
    }
    void show()
    {
        cout << n << endl;
    }
};

class B : virtual public A
{
};
class C : virtual public A
{
};
class D : public B, public C
{
};

int main()
{
    A ob;
    B ob1;
    C ob2;
    D ob3;

    ob.input();
    ob.show();

    ob1.input();
    ob1.show();

    ob2.input();
    ob2.show();

    ob3.input();
    ob3.show();

    return 0;
}