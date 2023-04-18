#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    vector<int> scores;
    int score = 0;
    float sum = 0;
    cout << "Please input the scores" << endl;
    while (true)
    {
        cin >> score;
        if (score < 0)
        {
            break;
        }
        scores.push_back(score);
        sum = sum + score;
    }
    cout << "The scores are ";
    for (int i = 0; i < scores.size(); i++)
    {
        cout << scores[i] << " ";
    }
    cout << "\nThe average is " << fixed << setprecision(2) << sum / scores.size() << endl;
    return 0;
}