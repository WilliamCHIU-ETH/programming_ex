#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[512], str2[512], str3[512];
    cout << "Please input two words" << endl;
    cin.getline(str1, 512);
    cin.getline(str2, 512);
    if (strncmp(str1, str2, 512) == 0)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not equal" << endl;
    }
    strcpy(str3, str2);
    strcat(str1, str3);
    cout << str1;
    return 0;
}