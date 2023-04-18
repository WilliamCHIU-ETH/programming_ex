#include <iostream>

using namespace std;
class Car
{
private:
    /* data */
    string name;
    int displacement;

public:
    void Input(string Name, int Displacement)
    {
        name = Name;
        displacement = Displacement;
    }
    string get_name()
    {
        return name;
    }
    int get_displacement()
    {
        return displacement;
    }
};

int main()
{
    Car YourCar;
    string name;
    int displacement;
    cout << "Please input the name and diaplacement of your car: " << endl;
    cin >> name >> displacement;
    YourCar.Input(name, displacement);
    cout << "The name of your car is " << YourCar.get_name() << endl;
    cout << "The displacement of your car is " << YourCar.get_displacement() << endl;
    return 0;
}