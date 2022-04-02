#include <iostream>
using namespace std;

class multi
{
private:
    int a, b, c;

public:
    void input()
    {
        cout << "Enter the two numbers : " << endl;
        cin >> a >> b;
    }
    void mult()
    {
        c = a * b;
    }
    void show()
    {
        cout << "Multiplication " << c << endl;
    }
};

int main()
{
    multi numbers;
    numbers.input();
    numbers.mult();
    numbers.show();
    return 0;
}