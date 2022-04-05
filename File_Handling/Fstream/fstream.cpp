#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char str[100];
    fstream obj;
    // obj.open("File.txt", ios::out);
    // cout << "Enter Data :" << endl;
    // cin >> str;
    // obj << str;
    // obj.close();
    obj.open("File.txt", ios::in);
    // obj >> str;
    obj.getline(str, sizeof(str));
    cout << str;
    obj.close();
    return 0;
}