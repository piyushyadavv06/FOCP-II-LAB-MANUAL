#include <iostream>

#include <set>

using namespace std;

int main() {

set<int> visitors;

int choice, id;

do {

cout << "\n1. Add Visitor\n2. Display\n3. Check Visitor\n0. Exit\n";

cin >> choice;

switch(choice) {

case 1:

cout << "Enter ID: ";

cin >> id;

visitors.insert(id);

break;

case 2:

for(int x : visitors)

cout << x << " ";

break;

case 3:

cout << "Enter ID: ";

cin >> id;

if(visitors.find(id) != visitors.end())

cout << "Visitor Exists";

else

cout << "Not Found";

break;

}

} while(choice != 0);

}





#include<iostream>

using namespace std;


namespace Myspace{

int x= 10;

void show(){

cout<<"HELLO";

}

}

int main(){

int x=100;

cout<<"\n my space"<<Myspace::x;

cout<<"\n nirmal variable x :"<<x;


Myspace::show();

}





#include<iostream>
#include<string>
using namespace std;
template<typename T1>
T1 add(T1 v1,T1 v2){
    return (v1+v1);
}
int main(){
    cout<<add<int>(10,20)<<endl;
    cout<<add<double>(30.5,67.89)<<endl;
    cout<<add<string>("hello","world");
    return 0;
}