//  Create a class Employee with name and salary. Derive two classes Developer and
// Designer, each having a function displayRole(). Demonstrate how both classes inherit
// common properties and define their own behaviour.
// (EmployeeDeveloper , EmployeeDesigner)


#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    float salary;
public:
    void setEmployee(string n, float s) {
        name = n;
        salary = s;
    }
    void displayEmployee() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};
class Developer : public Employee {
public:
    void displayRole() {
        displayEmployee();
        cout << "Role: Developer" << endl;
    }
};

class Designer : public Employee {
public:
    void displayRole() {
        displayEmployee();
        cout << "Role: Designer" << endl;
    }
};

int main() {
    Developer d;
    Designer ds;

    d.setEmployee("Amit", 60000); 
    d.displayRole();    

    ds.setEmployee("Neha", 55000);
    ds.displayRole();     

    return 0;
}