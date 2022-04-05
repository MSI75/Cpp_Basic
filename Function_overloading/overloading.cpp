#include <iostream>
using namespace std;

int fun();
int fun(int x, int y);
int fun(int x);

int main()
{
    fun();
    fun(75, 25);
    fun(5);

    return 0;
}

int fun()
{
    int x, y;
    cout << "Enter two values : " << endl;
    cin >> x >> y;
    cout << "Sum = " << x + y << endl;
    return 0;
}

int fun(int x, int y)
{
    cout << "Sum = " << x + y << endl;
    return 0;
}

int fun(int x)
{
    cout << "Multiple = " << x * x << endl;
    return 0;
}