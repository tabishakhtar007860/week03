#include <iostream>
using namespace std;
main(){
int wd;
int earnPerDay;
float exchange;
cout<<"Enter work per day:";
cin>>wd;
cout<<"Enter earning per dollars:";
cin>>earnPerDay;
cout<<"enter exchange rate from USD to PKR:";
cin>>exchange;
float salaryPerMonth;
salaryPerMonth=wd*earnPerDay;
float salaryPerYear;
salaryPerYear=12*salaryPerMonth;
float salaryAfterBonous;
salaryAfterBonous=(2.5*salaryPerMonth+salaryPerYear);
float salaryAfterTax;
salaryAfterTax=(salaryAfterBonous-(salaryAfterBonous*25/100));
float earningpd;
earningpd=salaryAfterTax*exchange/365;
cout<<"kak's Earning per dollars rps is ..."<<earningpd;}
