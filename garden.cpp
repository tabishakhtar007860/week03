#include <iostream>
using namespace std;
main(){
float vprice;
float fprice;
int totalv;
int totalf;
float total;

cout<<"enter Vegetable price per kilogram:";
cin>>vprice;
cout<<"enter fruit price per kilogram:";
cin>>fprice;
cout<<"total kgs of vegetable";
cin>>totalv;
cout<<"total kgs of fruit";
cin>>totalf;
total=(0.194*vprice*totalv+19.4*fprice*totalf)*1.94;
cout<<"total is"<<total;

}