#include <iostream>
using namespace std;

class Device {
public:
    void powerOn() {
        cout << "Device is powering on" << endl;
    }
};
class Computer : public Device {
public:
    void process() {
        cout << "Computer is processing data" << endl;
    }
};
class Laptop : public Computer {
public:
    void carry() {
        cout << "Laptop is portable and easy to carry" << endl;
    }
};
int main() {
    Laptop l;

    l.powerOn();  
    l.process(); 
    l.carry();    
    return 0;
}