#include<iostream>
using namespace std;
int main()
{      //Declaration of varibles
       int USD;
       float B,M,J,I,A,U,R,E;
       char converted;
       //input American dollars
       cout<<"Enter currency in US Dollars"<<endl;
       cin>>USD;
       //Calculations
       B=USD*0.571505;
       M=USD*20.92;
       J=USD*117.32;
       I=USD*76.76;
       A=USD*1.37;
       U=USD*3.67;
       R=USD*133;
       E=USD*0.92;
       
       cout<<"USD to be converted into \n (1) Enter 'B' for British pounds \n (2) Enter 'M' for Mexican pesos \n (3) Enter 'J' for Japanese yen \n (4) Enter 'I' for Indian rupees \n (5) Enter 'A' for Australian Dollars\n (6) Enter 'U' for UAE Dihrams \n (7) Enter 'R' for Russian Ruble \n (8) Enter 'E' for EUROS "<<endl;
       cin>>converted;
       if (converted=='B'){
       cout<<USD<<"US dollars are equal to "<<B<<" British pounds"<<endl;}
      else if(converted=='M'){
       cout<<USD<<"US dollars are equal to "<<M<<" Mexican pesos"<<endl;}
        else if(converted=='J'){
       cout<<USD<<"US dollars are equal to "<<J<<" Japanese yen"<<endl;}
     else if(converted=='I'){
       cout<<USD<<"US dollars are equal to "<<I<<" Indian rupees"<<endl;}
        else if(converted=='A'){
       cout<<USD<<"US dollars are equal to "<<A<<" Australian Dollars"<<endl;}
        else if(converted=='U'){
       cout<<USD<<"US dollars are equal to "<<U<<" UAE Dihrams"<<endl;}
        else if(converted=='R'){
       cout<<USD<<"US dollars are equal to "<<R<<" Russian Ruble"<<endl;}
        else if(converted=='E'){
       cout<<USD<<"US dollars are equal to "<<E<<" Euros"<<endl;}
       else{
           cout<<"Could not convert"<<endl;
       }
       return 0;
}
