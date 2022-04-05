#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n;
    char name[20];
    ifstream ifn;
    ifn.open("File.txt");
    ifn >> n >> name;
    cout << n << " " << name;
    ifn.close();
    return 0;
}