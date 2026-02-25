#include<iostream>
using namespace std;

class temperature{
    public :
    float celsius;
      void inputTemperature(){
        cout<<"enter temp in celsius : ";
        cin>>celsius;
      }
      float convertToFahrenheit(){
        return ((celsius*9)/5)+32;
      }
      void displayResult(){
        cout<<"temp in fahrenheit is : "<<convertToFahrenheit();
      }

};
int main(){
    temperature t1;
    t1.inputTemperature();
    t1.displayResult();
    return 0;
}