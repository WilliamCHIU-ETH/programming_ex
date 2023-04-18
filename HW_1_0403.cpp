#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "Please input two strings: " << endl;
    string str1, str2, str3;
    getline(cin, str1);
    getline(cin, str2);
    ofstream out;
    out.open("outfile.txt");
    if (out.fail())
    {
        cout << "input file opeing failed" << endl;
        exit(1);
    }
    str3 = str1.substr(0, ((str1.length() + 1) / 2)) + str2.substr(((str2.length() + 1) / 2));
    out << "The processed string is : " << '\n'
        << str3 << endl;
    return 0;
}