#include <iostream>
#include <vector>
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
    vector<PersonInfo> cars;
    PersonInfo my_car;
    cout << "Please input info of two people : " << endl;
    cout << "Input the name and car data of the first person" << endl;
    cin >> my_car.name >> my_car.OwnCar.name >> my_car.OwnCar.displacement;
    cars.push_back(my_car);
    cout << "Input the name and car data of the second person" << endl;
    cin >> my_car.name >> my_car.OwnCar.name >> my_car.OwnCar.displacement;
    cars.push_back(my_car);
    cout << "The name and car data of the two people are:" << endl;
    vector<PersonInfo>::iterator h;
    for (h = cars.begin(); h != cars.end(); h++)
    {
        cout << h->name << '\n'
             << h->OwnCar.name << '\n'
             << h->OwnCar.displacement << endl
             << endl;
    }
    return 0;
}