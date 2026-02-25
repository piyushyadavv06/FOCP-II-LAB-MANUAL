
 #include<iostream>
using namespace std;

class rectangle{
    public:
	float length;
	float width;

    void inputDimensions(){
       cout<<"enter length and width : ";
       cin>>length>>width;
    }
    float calculateArea(){
        return length*width;
    }
    float calculatePerimeter(){
        return 2*(length+width);
    }
    void displayResult(){
        cout<<"\nlength is : "<<length;
        cout<<"\nwidth is : "<<width;
        cout<<"\narea is : "<<calculateArea();
        cout<<"\nperimeter is : "<<calculatePerimeter();
    }
};

int main(){
    rectangle r1;
    r1.inputDimensions();
    r1.displayResult();
    return 0;
}
