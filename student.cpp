#include<iostream>
using namespace std;

class Student{
    public:
    int rollNo;
    string name;
    int marks1;
    int marks2;
    int marks3;

    void inputDetails(){   //setter
           cout<<"\n enter rollNo , name , marks1 , marks2 , marks3 : ";
           cin>>rollNo>>name>>marks1>>marks2>>marks3;
    }
    int calculateTotal(){
           return (marks1+marks2+marks3);
    }
    void displayDetails(){   //getter
       cout<<"\nName : "<<name<<"\nroll no : "<<rollNo;
     cout<<"\nmarks1 : "<<marks1<<"\nmarks2 : "<<marks2<<"\nmarks3 : "<<marks3;
     cout<<"\ntotal : "<<calculateTotal();
    }

};

int main(){

    Student s1;  //s1 is the object/instance of the class student
    s1.inputDetails();
    s1.displayDetails();
  return 0;
}



