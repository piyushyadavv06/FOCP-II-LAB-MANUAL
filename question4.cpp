 //Create two classes: Employee with name, and Department with department name.
// Derive a class Manager that displays both employee name and department.
// Demonstrate usage through object creation.((Employee, Department)Manager)


#include <iostream>
using namespace std;

class Employee {
protected:
    string name;

public:
    void setEmployee(string n) {
        name = n;
    }
};

class Department {
protected:
    string deptName;

public:
    void setDepartment(string d) {
        deptName = d;
    }
};

class Manager : public Employee, public Department {
public:
    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Department: " << deptName << endl;
    }
};

int main() {
    Manager m;
    m.setEmployee("Rahul Sharma");
    m.setDepartment("IT");
    m.display();

    return 0;
}