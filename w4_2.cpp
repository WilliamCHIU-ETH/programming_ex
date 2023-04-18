#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Please input two strings" << endl;
    getline(cin, str1);
    getline(cin, str2);
    if (str1 == str2)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }
    if (str1.find(str2) < str1.length())
    {
        cout << "The first string contains the second string." << endl;
    }
    else
    {
        cout << "The first string doesn't contain the second string." << endl;
    }

    return 0;
}