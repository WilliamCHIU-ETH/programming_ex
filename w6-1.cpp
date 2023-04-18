#include <iostream>
#include <string>
using namespace std;

int main()
{
    // number of strings to input
    int nums_of_strings = 0;
    cout << "Please input the number of strings you will input: " << endl;
    cin >> nums_of_strings;

    // string pointer array
    string *word = new string[nums_of_strings];
    // clean up buffer
    cin.ignore();

    // getline nums of strings
    cout << "Please input the strings: " << endl;
    for (int i = 0; i < nums_of_strings; i++)
    {
        getline(cin, word[i]);
    }

    // insert it
    word[0].insert(1, word[1]);
    word[2].insert(3, word[3]);
    cout << "\nThe " << nums_of_strings << " strings are: " << endl;
    // for loop & cout
    for (int i = 0; i < nums_of_strings; i++)
    {
        cout << word[i] << endl;
    }
    delete[] word;
    return 0;
}