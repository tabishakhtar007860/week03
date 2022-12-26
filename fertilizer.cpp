#include <iostream>
using namespace std;
main(){
float size;
float cost;
float area;
float cost_p;
float cost_a;

cout<<"Enter bag size in pounds:";
cin>>size;
cout<<"Enter cost of bag:";
cin>>cost;
cout<<"enter area covered by each bag in squre foot: ";
cin>>area;
cost_p=cost/size;
cost_a=cost/area;
cout<<"_________________________________________________________"<<endl;

cout<<"cost of the fertilizer per pound:"<<cost_p<<endl;
cout<<"cost of fertilizing the area per squre feet :"<<cost_a;} 