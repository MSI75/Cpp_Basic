#include <iostream>
using namespace std;

class base1
{
private:
    int a;

public:
    void intput()
    {
        cout << "Enter value of the base class 1 " << endl;
        cin >> a;
    }
    void show()
    {
        cout << "a = " << a << endl;
    }
};

class base2
{
private:
    int b;

public:
    void input1()
    {
        cout << "Enter value of the base class 2 " << endl;
        cin >> b;
    }
    void show1()
    {
        cout << "b = " << b << endl;
    }
};

class drive : public base1, public base2
{
private:
    int c;

public:
    void input2()
    {
        cout << "Enter value of the drive class " << endl;
        cin >> c;
    }
    void show2()
    {
        cout << "c = " << c << endl;
    }
};

int main()
{
    // base1 obj;
    // base2 obj1;

    // obj.intput();
    // obj.show();

    // obj1.input1();
    // obj1.show1();

    drive obj2;
    // obj2.input(); // not allow
    obj2.show();

    obj2.input2();
    obj2.show2();

    obj2.input1();
    obj2.show1();

    return 0;
}