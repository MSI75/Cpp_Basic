#include <iostream>
using namespace std;

// Class
class A
{
private:
    int a, b;

public:
    void input()
    {
        cout << "Enter the two value :" << endl;
        cin >> a >> b;
    }
    void show();
};
void A::show()
{
    cout << a << ends << b;
};

int main()
{
    // Object
    A obj;
    obj.input();
    obj.show();
}
