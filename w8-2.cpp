#include <iostream>
using namespace std;
//class
class Car{
    //member variable
    private:
    string name;
    int displacement;
    //member fuction
    public:
    void Input(string model_name,int model_displacement){
        name=model_name;
        displacement=model_displacement;
    }
    string get_name(){
        return name;
    }
    int get_displacement(){
        return displacement;
    }
    //default constructor
    Car(){
        this->name = "";
        this->displacement = 0;
    }
    //constructor
    Car(string model_name,int model_displacement){
        this->name = model_name;
        this->displacement = model_displacement;
    }
};
//main fuction
int main(){
    Car YourCar;
    string name;
    int displacement;
    cout<<"Please input the name & displacement of your car : "<<endl;
    cin>>name>>displacement;
    YourCar.Input(name,displacement);
    Car MyCar("Kuga",2000);
    cout<<YourCar.get_name()<<endl<<YourCar.get_displacement()<<endl;
    cout<<MyCar.get_name()<<endl<<MyCar.get_displacement();
    return 0;
}