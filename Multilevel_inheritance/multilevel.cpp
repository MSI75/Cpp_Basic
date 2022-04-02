#include <iostream>
using namespace std;

class base
{
protected:
    int a;

public:
    void input()
    {
        cout << "Enter value of the base Class" << endl;
        cin >> a;
    }
    void show()
    {
        cout << "a = " << a << endl;
    }
};

class drive1 : public base
{
protected:
    int b;

public:
    void getData()
    {
        cout << "Enter value of the drive class 1 " << endl;
        cin >> b;
    }
    void display()
    {
        cout << "b = " << b << endl;
    }
};

class drive2 : public drive1
{
private:
    int c;

public:
    void input1()
    {
        cout << "Enter value of the drive class 2 " << endl;
        cin >> c;
    }
    void show1()
    {
        cout << "c = " << c << endl;
        // cout<<"a = "<<a<<endl;  // Not access allow because private
        // cout<<"b = "<<b<<endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    base ob;
    drive1 bj;
    drive2 obj;

    // ob.input();
    // ob.show();

    // bj.getData();
    // bj.display();

    obj.input();
    // obj.show();

    obj.getData();
    // obj.display();

    obj.input1();
    obj.show1();

    return 0;
}