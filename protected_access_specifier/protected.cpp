/* protected ------> 1. base class
                   2. derive class */

#include <iostream>
using namespace std;

class base
{
protected:
    int a, b;

public:
    void show()
    {
        a = 75, b = 25;
        cout << a << ends << b << endl;
    }
};

// class derive : protected base // allow
class derive : public base
{
public:
    void disp()
    {
        a = 25, b = 75;
        cout << a << ends << b << endl;
    }
};

int main()
{
    base obj;
    obj.show();

    derive dis;
    dis.disp();
    return 0;
}
