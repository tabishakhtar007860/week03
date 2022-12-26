#include <iostream>
using namespace std;
main(){
string name;
float adult;
float child;
float adult_s;
float child_s;
float per_donate;
float total;
float after;
cout<<"Enter Movie name :";
cin>>name;
cout<<"Enter Adult Ticket Price:";
cin>>adult;
cout<<"Enter Child Ticket Price:";
cin>>child;

cout<<"Enter Number of Adult Ticket sold :";
cin>>adult_s;
cout<<"enter Number of child Ticket Sold :";
cin>>child_s;
cout<<"Enter Percentage to donate:";
cin>>per_donate;

total=(adult*adult_s+child*child_s);
per_donate=(total*10/100);
after=(total-per_donate);
cout<<"_____________________________________"<<endl;
cout<<"Total Amount Generated:"<<total<<endl;
cout<<"Amount after donation:"<<after;}



