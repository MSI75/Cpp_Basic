#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofn;
    ofn.open("file.txt");
    ofn.close();
    return 0;
}