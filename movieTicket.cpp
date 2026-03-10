#include<iostream>
using namespace std;

class movieTicket{
  public:
  string movieName;
  int seatNumber;
  int ticketPrice;
  bool isBooked=true;
  
    movieTicket();
    movieTicket(string name,int seat , int price);

     void bookTicket();
     void cancelTicket();
     void displayTicketDetails();
     int calculateTotalCost(int numberOfTickets);
};

movieTicket::movieTicket(){
    movieName="unknown";
    seatNumber=0;
    isBooked=false;
    ticketPrice=200;
}
movieTicket::movieTicket(string name,int seat , int price){
    movieName=name;
    seatNumber=seat;
    ticketPrice=price;
}
void movieTicket::bookTicket(){
    if(isBooked==false){
        isBooked=true;
    }
}
void movieTicket::cancelTicket(){
    if(isBooked==true){
        isBooked=false;
    }
}
int movieTicket::calculateTotalCost(int numberOfTickets){
    int xyz=numberOfTickets*ticketPrice;
    return xyz;
}
void movieTicket::displayTicketDetails(){
    cout<<endl<<movieName;
    cout<<endl<<seatNumber;
    cout<<endl<<ticketPrice;
    cout<<endl<<calculateTotalCost(5);
    if(isBooked==true){
        cout<<"\nticket booked";
    }
    else
    cout<<"\nticket not booked";
}
int main(){
    
    movieTicket m1;
    m1.displayTicketDetails();
    movieTicket m2("main hoon lcky the racer", 35 , 800);
    m2.bookTicket();
    m2.displayTicketDetails();

return 0;
}