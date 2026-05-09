//class ko jab inherit class dena ho

#include<iostream>
using namespace std;

class Shape{
    public:
     Shape(){
        cout<<"\n shape default const called";
     }
     virtual void area(){                  // virtual use taki de paye parent class ko child class
        cout<<"\n no dim no area";           //class ki chize.
     }                                     //for abstract virtual void area()=0;
     void display(){
        cout<<"\n we are 2-d shapes ";
     }

};
class rectangle: public Shape{
    public:
	int length;
	int width;
       rectangle(int l=5,int w=10):length(l),width(w){
       cout<<"\n rectangle object created";}
    void area(){
        cout<<"\n area : "<<length*width;
    }
};

int main(){
    Shape *s1,s2;               //pointer hee lena pdega
    rectangle r1,r2(50,45);
    s1=&s2;
    s1->area();
    s1=&r2;
    s2=r2;

    s1->area();
    s2.area();
    return 0;
}
