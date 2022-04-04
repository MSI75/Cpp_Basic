#include <iostream>
using namespace std;

inline int func(int a, int b)
{
    return (a > b) ? a : b;
};

int main()
{
    int max = func(75, 255);
    cout << "Maximum = " << max << endl;
    return 0;
}