#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    double salary;
public:
    Employee(string n): name(n), salary(0) {}
    virtual void pay() = 0;
    virtual ~Employee() {}
};

class Manager : virtual public Employee {
public:
    Manager(string n): Employee(n) {}
    void pay() override {
        salary = 7000;
        cout << "Manager " << name << " pay: " << salary << endl;
    }
};

class Technician : virtual public Employee {
    int hours;
public:
    Technician(string n, int h): Employee(n), hours(h) {}
    void pay() override {
        salary = hours * 100;
        cout << "Technician " << name << " hours: " << hours
             << " pay: " << salary << endl;
    }
};

class Salesman : virtual public Employee {
protected:
    double sales;
public:
    Salesman(string n, double s): Employee(n), sales(s) {}
    void pay() override {
        salary = sales * 0.05;
        cout << "Salesman " << name << " sales: " << sales
             << " commission: " << salary << endl;
    }
};

class SalesManager : public Manager, public Salesman {
public:
    SalesManager(string n, double s)
      : Employee(n), Manager(n), Salesman(n, s) {}
    void pay() override {
        salary = 4000 + sales * 0.005;
        cout << "SalesManager " << name << " dept sales: " << sales
             << " pay: " << salary << endl;
    }
};

int main() {
    Employee* e;

    e = new Manager("Alice");
    e->pay();
    delete e;

    e = new Technician("Bob", 160);
    e->pay();
    delete e;

    e = new Salesman("Charlie", 50000);
    e->pay();
    delete e;

    e = new SalesManager("Diana", 200000);
    e->pay();
    delete e;

    return 0;
}
