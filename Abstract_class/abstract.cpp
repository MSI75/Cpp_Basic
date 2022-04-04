#include <iostream>
using namespace std;

class A
{
public:
    virtual void show() = 0;
    void display()
    {
        cout << "Hello, I am base class !" << endl;
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "Hello, I am derive class !" << endl;
    }
};

int main()
{
    // B ob;
    // ob.display();
    // ob.show();

    A *p;
    B ob;
    p = &ob;
    p->show();
    p->display();

    return 0;
}