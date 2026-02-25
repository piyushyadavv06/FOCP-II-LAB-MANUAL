#include<iostream>
using namespace std;

class book{
    public :
    string title;
    string author;
    double price;

    void inputDetails(){
        cout<<"enter title , author , price : ";
        cin>>title;
        cin.ignore();
        getline(cin,author);
        cin>>price;
    }
    void displayDetails(){
        cout<<"title of book is : "<<title;
        cout<<"\nauthor is : "<<author;
        cout<<"\nprice is : "<<price;
    }
};

int main(){
    book b1;
    b1.inputDetails();
    b1.displayDetails();
    return 0;
}