// Create a class Animal with a function eat(). Derive a class Dog with a function bark().
// Further derive a class Puppy with a function weep(). Show how the Puppy class can
// access all functions.(AnimalDogPuppy)

#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"animal is eating ";
    }
};
class Dog:public Animal{
    public:
    void bark(){
        cout<<"dog is barking ";
    }
};
class Puppy:public Dog{
    public:
    void weep(){
        cout<<"puppy is weeping ";
    }
};
int main(){
    Puppy p;

    p.eat();
    p.bark();
    p.weep();
    return 0;
}