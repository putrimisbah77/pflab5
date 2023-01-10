#include <iostream>
#include <cmath>
using namespace std;
main()
{
 float num1;
 float num2;
 float total;
 cout<<"Enter number1: ";
 cin>>num1;
 cout<<"Enter number2: ";
 cin>>num2;
  
 total=max(num1,num2);
 cout<<total<<" is greater.";
 cout<<endl;
 total=min(num1,num2);
 cout<<total<<" is minimum.";
 cout<<endl;
 total=sqrt(5); 
 cout<<"square root is "<<total;
 cout<<endl;
 total=pow(2,3);
 cout<<"Power is "<<total;
 cout<<endl;
 total=cbrt(2);
 cout<<"Cube root is "<<total;
 cout<<endl;
 total=ceil(3.5);
 cout<<"celing is "<<total;
 cout<<endl;
 total=floor(3.5);
 cout<<"Floor value is "<<total;
 cout<<endl;
 
}