#include <iostream>
using namespace std;


class Vehicle {
protected:
    string brand;
public:
    void setBrand(string b) { brand = b; }
};


class Car : public Vehicle {
protected:
    string model;
public:
    void setModel(string m) { model = m; }
};


class F1Car : public Car {
    int horsepower; 
    int topSpeed;   
    int weight;     
public:
    void setSpecs(int hp, int ts, int w) {
        horsepower = hp;
        topSpeed = ts;
        weight = w;
    }
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Horsepower: " << horsepower << " HP" << endl;
        cout << "Top Speed: " << topSpeed << " km/h" << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }
};

int main() {
    F1Car car;
    car.setBrand("Ferrari");
    car.setModel("SF-24");
    car.setSpecs(1050, 360, 798);
    car.display();
    return 0;
}




//Expected Output
Brand: Ferrari
Model: SF-24
Horsepower: 1050 HP
Top Speed: 360 km/h
Weight: 798 kg
