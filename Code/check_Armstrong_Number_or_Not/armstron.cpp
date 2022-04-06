#include <iostream>
using namespace std;

class A
{
    int n, c, r, arm;

public:
    void setData()
    {
        cout << "Enter any numbers :" << endl;
        cin >> n;
    }
    void getData()
    {
        c = n;
        arm = 0;
        while (n > 0)
        {
            r = n % 10;
            arm = (r * r * r) + arm;
            n = n / 10;
        }
        if (c == arm)
        {
            cout << "Armston Number : " << endl;
        }
        else
        {
            cout << "Not armston number : " << endl;
        }
    }
};

int main()
{
    A obj;
    obj.setData();
    obj.getData();

    return 0;
}