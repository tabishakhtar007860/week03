#include <iostream>
using namespace std;
main(){
string name;
float i1;
float i2;
float i3;
float i4;
float i5;
float percent;
cout<<"enter your name:";
cin>>name;
cout<<"enter subject 01 marks:";
cin>>i1;
cout<<"enter subject 02 marks:";
cin>>i2;
cout<<"enter subject 03 marks:";
cin>>i3;
cout<<"enter subject 04 marks:";
cin>>i4;
cout<<"enter subject 05 marks:";
cin>>i5;

float obtain=(i1+i2+i3+i4+i5);
percent=obtain/500*100;
cout<<"Your Percentage :"<<percent;}