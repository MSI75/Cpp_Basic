#include <iostream>
using namespace std;

class test
{
    int a, b;

public:
    test()
    {
        cout << "Enter values : " << endl;
        cin >> a >> b;
        cout << a << ends << b << endl;
    }
    test(int x, int y)
    {
        a = x;
        b = y;
        cout << a << ends << b << endl;
    }
    test(test &obj)
    {
        a = obj.a;
        b = obj.b;
        cout << a << ends << b << endl;
    }
    void show()
    {
        cout << a << ends << b << ends;
    }
};

int main()
{
    test obj;
    test obj1(12, 23);
    // test obj2 = obj1;
    // test obj2{obj1};
    test obj2(obj1);
    obj2.show();
    obj.show();
    obj1.show();
    return 0;
}