#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream in;
    ofstream out;
    in.open("in.txt");
    if (in.fail())
    {
        cout << "open file failed" << endl;
        exit(1);
    }
    out.open("output.txt");
    if (out.fail())
    {
        cout << "output file failed" << endl;
        exit(1);
    }

    in.close();
    out.close();
    return 0;
}