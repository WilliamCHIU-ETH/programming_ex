#include <iostream>

using namespace std;

int main()
{
    // number of students & courses
    int numS = 0, numC = 0;
    cout << "Please input the number of students :" << endl;
    cin >> numS;
    cout << "Please input the number of courses :" << endl;
    cin >> numC;

    // 2-dimension pointer array
    int **Score = new int *[numS];
    for (int i = 0; i < numS; i++)
    {
        Score[i] = new int[numC];
    }
    // cin student's courses scores
    for (int i = 0; i < numS; i++)
    {
        Score[i][numC] = 0;
        for (int j = 0; j < numC; j++)
        {
            cin >> Score[i][j];
            // store the sum of the student's scores
            Score[i][numC] += Score[i][j];
        }
        // divide into average
        Score[i][numC] = Score[i][numC] / numC;
    }
    // cout their average
    for (int i = 0; i < numS; i++)
    {
        cout << "The average score of student#" << i << " is " << Score[i][numC] << endl;
    }
    for (int i = 0; i < numS; i++)
    {
        delete[] Score[i];
    }
    delete[] Score;
    return 0;
}