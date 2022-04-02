#include <iostream>
using namespace std;

class base
{
protected:
    int a, b;

public:
    void input()
    {
        cout << "Enter the values : " << endl;
        cin >> a >> b;
    }
    void show()
    {
        cout << "a = " << a << " "
             << "b = " << b << endl;
    }
};

class drive : public base
{
private:
    int m, n;

public:
    void getData()
    {
        cout << "Enter the values : " << endl;
        cin >> m >> n;
    }
    void display()
    {
        cout << "m = " << m << " "
             << "n = " << n << endl;
        // cout << a << ends << b << endl; // not access because private
        cout << "a = " << a << " "
             << "b = " << b << endl; // allow access because protected
    }
};

int main()
{
    base ob;
    drive obj;
    // ob.input();
    // ob.show();

    obj.input();
    // obj.show();

    obj.getData();
    obj.display();

    return 0;
}