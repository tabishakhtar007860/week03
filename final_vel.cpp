#include <iostream>
using namespace std;
main(){
float accel;
float int_vel;
float time;
float final_vel;

cout<<"enter initial velocity :";
cin>>int_vel;

cout<<"enter accleration :";
cin>>accel;

cout<<"enter time: ";
cin>>time;

final_vel=(accel*time+int_vel);
cout<<"Final velocity:"<<final_vel;}