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
        cout << "input file opeing failed" << endl;
        exit(1);
    }
    out.open("OutputFile.txt");
    if (out.fail())
    {
        cout << "input file opeing failed" << endl;
        exit(1);
    }
    char c[512];

    while (!in.eof())
    {
        while (in.getline(c, 512))
        {
            out << c << endl;
        }
    }
    system("pause");
    return 0;
}