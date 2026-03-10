#include<iostream>
using namespace std;

class Light{
       public:
   string brand;
   int brightness;
   bool isOn;

   Light();       //default constructor
   Light( string c , int bright , bool status);

    void turnOff();
   void  turnOn();
   void increaseBrightness();
   void decreaseBrightness();
   void displayStatus();
};

Light::Light(){
    isOn=false;
    brand="unknown";
    brightness=50;
}
Light::Light(string brand , int bright , bool status){
  brand = brand;
  brightness=bright;
  isOn=status;
}

   void Light:: turnOff(){
      isOn=false;
}
  void Light::turnOn(){
      isOn=true;
}

   void Light::increaseBrightness(){
     brightness+=10;
     if(brightness>100){
        brightness=100;
     }
   }

   void Light::decreaseBrightness(){
    brightness-=10;
    if(brightness<0){
        brightness=0;
    }
   }
   void Light :: displayStatus(){
     cout<<endl<<brand;
     cout<<endl<<brightness;
     if(isOn==true)
     cout<<"\nlight is on";
     else
     cout<<"\nlight is off";
   }

   int main(){
    
    Light l2( "macho", 70 , true);
    Light l1;
    l1.decreaseBrightness();
    l2.increaseBrightness();
    l1.turnOff();
    l2.turnOn();
    l1.displayStatus();
    l2.displayStatus();
    return 0;
}

