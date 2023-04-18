#include <iostream>
using namespace std;

struct Car
{
    string name;
    int displacement;
};
struct PersonInfo
{
    string name;
    Car OwnCar;
};
int main()
{
    PersonInfo my_car;
    cout<<"Please input your name and data about your car : "<<endl;
    cin>>my_car.name>>my_car.OwnCar.name>>my_car.OwnCar.displacement;
    cout<<"Your names is "<<my_car.name<<endl;
    cout<<"The name of your car is "<<my_car.OwnCar.name<<endl;
    cout<<"The displacement of your car is "<<my_car.OwnCar.displacement<<endl;
    return 0;
}