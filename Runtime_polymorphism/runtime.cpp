#include <iostream>
using namespace std;

class A
{
public:
    virtual void show()
    {
        cout << "Hi I am Base class " << endl;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "Hi I am Derive class " << endl;
    }
};

int main()
{
    A *p;
    B ob;
    p = &ob;
    p->show();
    return 0;
}