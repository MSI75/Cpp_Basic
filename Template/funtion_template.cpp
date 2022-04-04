#include <iostream>
using namespace std;
template <class T> // function template
void show(T a, T b)
{
    cout << "A = " << a << ends << "B = " << b << endl;
}

int main()
{
    int p = 75, q = 25;
    char m = 's', n = 'n';
    float f = 72.5, l = 35.6;
    show(p, q);
    show(m, n);
    show(f, l);
    return 0;
}