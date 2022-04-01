#include <iostream>
#include <conio.h>
using namespace std;

// Local class

void fun()
{
    class A
    {
    private:
        int a,
            b;

    public:
        void show()
        {
            cout << "Enter Two value :" << endl;
            cin >> a >> b;
            cout << a << " " << b;
        }
    };
    A obj;
    obj.show();
};

int main()
{
    fun();
    return 0;
}
