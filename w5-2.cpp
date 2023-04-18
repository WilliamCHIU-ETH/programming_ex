#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> vec(100);
    cout << "Please input four string" << endl;
    for (int i = 0; i < 4; i++)
    {
        getline(cin, vec[i]);
    }
    // cout << "The four strings are:" << endl;
    // for (int j = 0; j < 4; j++)
    // {
    //     cout << vec[j] << endl;
    // }
    cout << endl
         << vec[0].insert(2, vec[1]) << endl;
    cout << vec[1] << endl;
    cout << vec[2].insert(4, vec[3]) << endl;
    cout << vec[3];
    return 0;
}