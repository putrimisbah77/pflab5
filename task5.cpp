#include <iostream>
using namespace std;
main()
{
 int num1;
 int num2;
 int num3;
 int min;
 
 cout<<"Enter hourse: ";
 cin>>num1;
 cout<<"Enter minutes: ";
 cin>>num2;
 min=num2+15;
 if(min>60)
 {
  num1=num1+1;
  min=min-60;
 }
 if(num1>23)
 {
  num1=num1-24;
  
 }
 cout<<num1<<" : "<<min;
 
}