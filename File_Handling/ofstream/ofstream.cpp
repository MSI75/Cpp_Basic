#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n;
    char name[100];
    ofstream ofn;
    ofn.open("File.txt");
    cout << "Enter no. and name :" << endl;
    cin >> n >> name;
    ofn << n << " " << name;
    ofn.close();
    return 0;
}