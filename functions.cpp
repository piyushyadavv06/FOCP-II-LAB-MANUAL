#include<iostream>
using namespace std;

int sum(int x , int y){
    cout<<"\nfor int ";
    return x+y;
}
float sum(float x, float y){
    cout<<"\nfor float";
    return x+y;
}
double sum( double x , double y){
    cout<<"\nfor double ";
    return x+y;
}
                         //issue is that float wala bhi double mein aara h
int main(){                       //(put f after number like 5.28f,10.28f )
    cout<<sum(5,10);
    cout<<sum(5.28,10.28);     
    cout<<sum(5.2869,10.2859);
    return 0;
}




#include<iostream>
using namespace std;

int result( int n1,int n2){
    return n1+n2;
}
int result( int n1,int n2, int n3){
    return n1+n2+n3;
}
int result( int n1,int n2, int n3, int n4){
    return n1+n2+n3+n4;
}
int result( int n1,int n2, int n3, int n4, int n5){
    return n1+n2+n3+n4+n5;
}

int main(){
    cout<<result(47,69,68)<<endl;
    cout<<result(47,69,68,334)<<endl;
    cout<<result(47,69)<<endl;
    cout<<result(47,69,68,290, 38)<<endl;
    return 0;
}




//this code is very long so better code is :-

#include<iostream>
using namespace std;

int result( int n1,int n2, int n3=0, int n4=0, int n5=0){
    return n1+n2+n3+n4+n5;
}

int main(){
    cout<<"result of 3 is "<<result(47,69,68)<<endl;
    cout<<"result of 4 is "<<result(47,69,68,334)<<endl;
    cout<<"result of 2 is "<<result(47,69)<<endl;
    cout<<"result of 5 is "<<result(47,69,68,290, 38)<<endl;
    return 0;
}



#include<iostream>
using namespace std;

void welcome(string fname="agent ", string lname=""){
    cout<<"\n welcome "<<fname<<" "<<lname;
}

int main(){
    welcome(); 
    welcome("piyush");
    welcome("piyush","yadav");
    return 0;
}


