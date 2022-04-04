#include <iostream>
using namespace std;

template <class T> // class template
class show
{
    T a, b;

public:
    show(T p, T q)
    {
        a = p;
        b = q;
    }
    void display()
    {
        cout << "A = " << a << ends << "B = " << b << endl;
    }
};

int main()
{
    // show<int> ob(75, 25);       // class_name<dataType>class_object
    // show<float> ob(75.5, 25.5); // class_name<dataType>class_object
    show<char> ob('A', 'B'); // class_name<dataType>class_object
    ob.display();
    return 0;
}