#include <iostream>
using namespace std;

class A
{
    // int a, b;

public:
    void show()
    {
        cout << "Enter values : " << endl;
        cin >> a >> b;
        cout << a << " " << b << endl;
    }
    void sum()
    {
        cout << "Enter values : " << endl;
        cin >> a >> b;
        cout << "sum = " << a + b << endl;
    }

private:
    int a, b;
};

int main()
{
    A ob, obj;
    ob.show();
    obj.sum();

    return 0;
}