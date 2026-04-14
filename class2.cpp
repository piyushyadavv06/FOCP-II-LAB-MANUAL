#include<iostream>
using namespace std;

class rectangle{
    static int count;
	float length;
	float width;
    public:
       rectangle(){
        length=0;width=0;count++;
       }
       rectangle(int l , int w){
        length=l;width=w;count++;
       }
    void display(){
        cout<<"\nlength is : "<<length;
        cout<<"\nwidth is : "<<width;
        cout<<"\ntotal count is : "<<count;
    }
};

int rectangle :: count;

int main(){
    rectangle r1,r2(30,30);
    r1.display();
    r2.display();
    rectangle r3;
    r3.display();
    return 0;
}
