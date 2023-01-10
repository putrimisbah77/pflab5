#include <iostream>
#include <cmath>
using namespace std;
float add(float squaroot1,int b);
float min(float squaroot1,int b);
main()
{
 int a;
 int b;
 int c;
 int power;
 int power1;
 float squaroot;
 float diva; 
 float  divisin1;
 float  divisin2;
 float result3;
 float result4;
 float squaroot1;
 
 cout<<"Enter the value of a: ";
 cin>>a;
 cout<<"Enter the value of b: ";
 cin>>b;
 cout<<"Enter the value of c: ";
 cin>>c;
 power=pow(b,2);
 power1=a*c*4;
 squaroot=power-power1;
 squaroot1=sqrt(squaroot);
 diva=2*a;
 result3=add(squaroot1,b);
 divisin1=result3/diva;
 cout<<" x= "<<divisin1;
 result4=min(squaroot1,b);
 divisin2=result4/diva;
 cout<<" x= "<<divisin2;
 }
 float add(float squaroot1,int b)
 { 
  float result1=-b+squaroot1;
  return result1;
 }
 float min(float squaroot1,int b)
 { 
  float result2=-b-squaroot1;
  return result2;
 }

 