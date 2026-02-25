#include<iostream>
using namespace std;

class employee{
    public :
    int empId;
    string name;
    double monthlySalary;

    void inputDetails(){
        cout<<"enter id , name , month salary :";
        cin>>empId>>name>>monthlySalary;
    }
    double calculateAnnualSalary(){
        return monthlySalary*12;
    }
    void displayDetails(){
        cout<<"\nid is : "<<empId;
        cout<<"\nname is : "<<name;
        cout<<"\nmonthly salary is : "<<monthlySalary;
        cout<<"\nannual salary is : "<<calculateAnnualSalary();
    }
};

int main(){
    employee e1;
    e1.inputDetails();
    e1.displayDetails();
    return 0;
}