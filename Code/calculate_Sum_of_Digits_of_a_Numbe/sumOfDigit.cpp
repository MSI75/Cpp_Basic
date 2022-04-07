#include <iostream>
using namespace std;

class A
{
    int n, s, r;

public:
    void setData()
    {
        cout << "Enter value : " << endl;
        cin >> n;
    }
    void getData()
    {
        s = 0;
        while (n > 0)
        {
            r = n % 10;
            s = s + r;
            n = n / 10;
        }
        cout << "The sum of digit : " << s << endl;
    }
};

int main()
{
    A obj;
    obj.setData();
    obj.getData();
    return 0;
}