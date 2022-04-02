#include <iostream>
using namespace std;

class add
{
private:
    int a, b, c;

public:
    void input()
    {
        cout << "Enter a two value : " << endl;
        cin >> a >> b;
    }
    void sum()
    {
        c = a + b;
    }
    void show()
    {
        cout << c << endl;
    }
};

int main()
{
    add numbers;
    numbers.input();
    numbers.sum();
    numbers.show();
    return 0;
}