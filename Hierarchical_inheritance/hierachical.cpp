#include <iostream>
using namespace std;

class base
{
private:
    int a, b;

public:
    void input()
    {
        cout << "Enter value for base class : " << endl;
        cin >> a >> b;
    }
    void show()
    {
        cout << "sum = " << a + b << endl;
    }
};

class derive1 : public base
{
private:
    int n1;

public:
    void input1()
    {
        cout << "Enter value for derive1 class : " << endl;
        cin >> n1;
    }
    void show1()
    {
        cout << "n1 = " << n1 << endl;
    }
};

class derive2 : public base
{
private:
    int n2;

public:
    void input2()
    {
        cout << "Enter value for derive2 class : " << endl;
        cin >> n2;
    }
    void show2()
    {
        cout << "n2 = " << n2 << endl;
    }
};

int main()
{
    base obj;
    derive1 obj1;
    derive2 obj2;

    /*
    obj.input();
    obj.show();
    */

    obj1.input();
    obj1.show();

    obj1.input1();
    obj1.show1();

    obj2.input();
    obj2.show();

    obj2.input2();
    obj2.show2();

    return 0;
}