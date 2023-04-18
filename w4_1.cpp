#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2, str3;
    cout << "Please input two strings" << endl;
    // input two strings
    getline(cin, str1);
    getline(cin, str2);
    if (str1 == str2)//compare two strings
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }
    //assign str2 to str3
    str3 = str2;
    cout << "The concatenated string: " << str1 + str3 << endl;
    cout << "The sub-string: " << str1.substr(2, 4);//start with str1[2] & count to 4 index
    return 0;
}