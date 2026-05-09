#include<iostream>
#include<fstream>
using namespace std;
/*int main(){
    ofstream fout("C:/Users/focp/Desktop/richa123.txt",ios::app);

    fout<<"\n 1234567\n sdf kwlbjekjwbkbsxj ";
    fout<<"jbshxegwygbhx";
    fout.close();
    cout<<"Data written successfully";
}*/
int main(){
    ifstream fin("filehandling.txt");
    string line;
    if(!fin.is_open()){
        cout<<"\n issue with thefile, cant read";
        return 0;
    }
    while(getline(fin,line)){
        cout<<line<<endl;
    }fin.close();
}



