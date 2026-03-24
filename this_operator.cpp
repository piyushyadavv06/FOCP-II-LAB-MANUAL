#include<iostream>
using namespace std;

class A
{
    int a1;
    int a2;
    public:
    A(){
        a1=0;
        a2=0;
    }
    A(int a1, int a2){
        a1=a1;
        a2=a2;
    }
    void display(){
        cout<<"\n a1 = "<<a1<<" a2 is : "<<a2;
    }
};
int main(){
A obj1,obj2(23,56);
obj1.display();
obj2.display();
return 0;
}



// a1 a2 become local variables so we use this-> operator



#include<iostream>
using namespace std;

class A
{
    int a1;
    int a2;
    public:
    A(){
        a1=0;
        a2=0;
    }
    A(int a1, int a2){
       this-> a1=a1;
        (*this).a2=a2;
    }
    void display(){
        cout<<"\n a1 = "<<a1<<" a2 is : "<<a2;
    }
};
int main(){
A obj1,obj2(23,56);
obj1.display();
obj2.display();
return 0;
}




