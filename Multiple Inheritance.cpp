#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
public:
    void setEmployee(string n, int i) {
        name = n;
        id = i;
    }
};

class Salary {
protected:
    double salary;
public:
    void setSalary(double s) {
        salary = s;
    }
};

class Manager : public Employee, public Salary {
public:
    void display() {
        cout << "Manager Name: " << name << "\n ID: " << id << "\n Salary: Rs " << salary << endl;
    }
};

int main() {
    Manager m;
    m.setEmployee("Mantavya", 24070123059);
    m.setSalary(2200000);
    m.display();
    return 0;
}




//Output:-
Manager Name: Mantavya
ID: 24070123059
Salary: Rs 2200000
