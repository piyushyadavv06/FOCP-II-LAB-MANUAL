#include<iostream>
using namespace std;

class Person{
    string name;
    int age;
    public:
    Person(){
        cout<<"\n person defualt consructor ";
        name = "defult";
        age=18;
    }
    Person(string nm,int ag){
        cout<<"\n person parameterized costructor";
        name=nm;
        age=ag;
    }
    void display(){
        cout<<"\n name : "<<name<<"\n age :"<<age;
    }
};
class Student : public Person{
    string rollno;
    public:
    Student(){
        cout<<"student default constructor "; 
        rollno="25csu176";
    }
    Student(string nm , int ag , string rno):Person(nm,ag){   // initialization list
        cout<<"\n student parameterized";
        rollno=rno;
    }  
    void display_student(){
        display();
        cout<<"\n roll no: "<<rollno;
    }
};
int main(){
    Student p1,p2("abcdefghijkl",18,"25csu176");
    p1.display();
    p1.display_student();
    p2.display_student();
    return 0;
}