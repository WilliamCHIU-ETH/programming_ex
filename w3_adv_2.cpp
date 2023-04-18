#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> //count¨ç¼Æ
#include <cstdlib>   //exit¨ç¼Æ
using namespace std;

int main()
{
    //create in,out and check if they open successfully
    ifstream in;
    ofstream out;
    in.open("w3_adv_2_inputfile.txt");
    if (in.fail())
    {
        cout << "Input file opening failed" << endl;
        exit(1);
    }
    out.open("w3_adv_2_outputfile.txt");
    if (out.fail())
    {
        cout << "Output file opening failed" << endl;
        exit(1);
    }
    string str1; //store input form txt file
    string max;  //largest frequency of letters
    int temp = 0;//to compare each letters counts
    getline(in, str1);
    for (int i = 0; i < str1.length(); i++)
    {
        if (temp < count(str1.begin(), str1.end(), str1[i]))
        // if the count of the letter larger than temp
        {
            temp = count(str1.begin(), str1.end(), str1[i]);
            //assign the bigger count to temp
            max = str1[i];
            //store the letter
        }
    }
    //output
    out << "The largest frequency of letters is " << max << endl;
    return 0;
}