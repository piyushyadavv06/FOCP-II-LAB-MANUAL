#include<iostream>
using namespace std;

class A{
    private:
    int a;
    public:
    A(){
        a=150;
    }
    ~A(){
        cout<<"A is destroyed"<<endl;
    }
    void display_a(){
        cout<<"A is : "<<a<<endl;
    }
};
class B :  virtual public A{
    private :
    int b;
    public:
    B(){
        b=219;
    }
     ~B(){
        cout<<"B is destroyed"<<endl;
    }
    void display_b(){
        cout<<"b is : "<<b<<endl;
    }
};
class C : virtual public A{   // virtual isliye kyuki c and b dono se A aa rha h toh taki kisi ek 
    private :                  // se hee value jaye warna 2 value jayengi A ki neeeche.
    int c;
    public:
    C(){
        c=350;
    }
     ~C(){
        cout<<"C is destroyed"<<endl;
    }
    void display_c(){
        cout<<"c is : "<<c<<endl;
    }

};
class D : public B, public C{
    private :
    int d;
    public:
    D(){
        d=500;}
    ~D(){
        cout<<"D is destroyed"<<endl;
    }
    void display_d(){
         display_a();
         display_b();
         display_c();
        cout<<"d is : "<<d<<endl;
    }
    
};

int main(){

    D d1;
    d1.display_d();
    return 0;
}


