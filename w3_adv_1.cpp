#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
float sum_up(vector<int> number){
    float sum=0;
    for(int i=0;i<number.size();i++){
        sum=number[i]+sum;
    }
    return sum/number.size();
}
int main(){
    vector<int> number;
    int input;
    for(int i = 0; i<10;i++){
        cin>>input;
        if(input<0){
            break;
        }
        else{
            number.push_back(input);
        }
    }
    cout<<fixed<<setprecision(2)<<sum_up(number)<<endl;
    return 0;
}