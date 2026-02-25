//skeleton method(more clean)
//question on group

#include<iostream>
using namespace std;

class Candy{
    string color;
    int points;
   public:
    void setCandy(string,int);
    void displayCandy();
};
void Candy::setCandy(string c,int p){
    color=c;points=p;
}
void Candy::displayCandy(){
    cout<<"\n color = "<<color;
    cout<<"\n point = "<<points;
}
int main(){
    Candy c1,c2;
    c1.setCandy("red",35);
    c2.setCandy("blue",40);
    c1.displayCandy();
    c2.displayCandy();
    return 0;
}





#include<iostream>
using namespace std;

class Candy{
    string color;
    int points;
     public:
           Candy();
           Candy(string c);
           Candy(string c , int p);

    void setCandy(string,int);
    void displayCandy();

    void loose_Candy();
    void loose_Candy(int);
    void gain_Candy();
    void gain_Candy(int);
};
    void Candy::gain_Candy(){
        points+=2;
     }

    void Candy::gain_Candy(int s){
        points+=s;
     }

    void Candy::loose_Candy(){
        if((points-2<0)){
            points=0;
        }
        else
        points=points-2;
     }
    void Candy::loose_Candy(int s){
        if((points-s<0)){
            points=0;
        }
        else
        points=points-s;
     }
     
     Candy::Candy(){
         color="black";points=0;    //default constructer
   }

     Candy::Candy(string c){
         color=c;points=0;        //parameterized
   }

     Candy::Candy(string c , int p){
         color=c;points=p;            //parameterized
   }

void Candy::setCandy(string c,int p){
    color=c;points=p;
}
void Candy::displayCandy(){
    cout<<"\n color = "<<color;
    cout<<"\n point = "<<points;
}
int main(){
    Candy c1,c2;

    c1.setCandy("red",35);
    c2.setCandy("blue",40);
    c1.gain_Candy(7);
    c1.displayCandy();
    c2.gain_Candy(4);
    c2.displayCandy();
    return 0;
}
