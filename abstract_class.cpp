// this code implements overriding, abstract class, pure virtual fn , final method & const method

#include<iostream>
using namespace std;
class shape //shape becomes abstract class bcoz it has one pure virtual method
{
    public:
    shape(){cout<<"\n shape default const called";}
  virtual void area()=0; //shape became abstract class, pure virtual function should be overridden 
 virtual void display() final //final methods cannot be overridden
    {cout<<"\n we are 2 d shapes"; }
};
class Rectangle:public shape
{
  public:
  int length;int width;
Rectangle(int l=5,int w=10):length(l),width(w)
{cout<<"\n Rectangle object created";}
void area(){cout<<"\n area ="<<length*width;}
void display_dim() const //cannot change values
{//length++;//not allowed when method is const
  cout<<"\n length & width "<<length<<width;
}
void display(){cout<<"\n i am rectangle display";}
};
int main()
{//shape *s1,s2;
    Rectangle r2(50,45);
    r2.display();
    r2.display_dim();
  return 0;
}