// Create two classes: Academic with marks, and Sports with score. Derive a class Result
// that displays both academic marks and sports score. Show how the derived class
// accesses members of both base classes. ((Academic,Sports)Result)


#include<iostream>
using namespace std;

class Academic{
    public:
    int marks;
    void setMarks(int m) {
        marks = m;
    }
};
class Sports{
    public:
    int score;
    void setScore(int s) {
        score = s;
    }
};
class Result:public Academic , public Sports{
     public:
     void display(){
        cout<<"academic marks are : "<<marks<<endl;
        cout<<"sports score is "<<score<<endl;
     }
};
int main(){
     Result r;
    r.setMarks(85);   
    r.setScore(90);   

    r.display(); 
    return 0;
}