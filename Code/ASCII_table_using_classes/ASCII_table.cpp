#include <iostream>
using namespace std;

class A
{
    int i;

public:
    void show()
    {
        for (i = 0; i < 255; i++)
        {
            cout << " " << (char)i << ends << " " << i;
        }
    }
};

int main()
{
    A obj;
    obj.show();
    return 0;
}