#include <iostream>
using namespace std;
bool sum(int a, int b, int c);
main()
{
 bool isture;
 int num;
 int a;
 int b;
 int c;
 while(true)
 {
  cout<<"Enter three number digit: ";
  cin>>num;
  a=num%10;
  b=(num/10)%10;
  c=num/100;
  isture=sum(a, b, c);
  if(isture == true)
  { 
   cout<<" is symmetrical.";
  }
  if(isture == false)
  { 
   cout<<" is nonsymmetrical.";
  }
 }
}
 bool sum(int a,int b, int c)
 { 
 
  
  if(a==c)
   {
    return true;
   }
  if(a!=c)
   {
    return false;
   }
 return 0;
 }
