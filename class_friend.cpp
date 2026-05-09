
#include<iostream>
using namespace std;

class rectangle{

	float length;
	float width;
    public:
       rectangle(){
        length=0;width=0;
       }
       rectangle(int l , int w){
        length=l;width=w;
       }
    void display(){
        cout<<"\nlength is : "<<length;
        cout<<"\nwidth is : "<<width;
    }
    friend void area ( rectangle obj);  // friend is used becoz length width access krle area aur
};                                      // unko public bhi na krna pda.
void area ( rectangle obj){
    cout<<" \narea is : "<<obj.length*obj.width;
}

int main(){
    rectangle r1,r2(30,30);
    r1.display();
    area (r1);
    r2.display();
    area(r2);
    return 0;
}




