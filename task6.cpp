#include <iostream>
using namespace std;
string value2(int num2);
string value1(int num3);
 int num;
 int num3;
 string num0;
 string num1;
 int num2;
main()
{
 
 while(true)
 {
 cout << "Enter any number except 11-19 : ";
 cin>>num;
 num2=num/10;
 num3=num%10;
 num0=value2(num2);
 num1=value1(num3);
 cout<<num0<<" "<<num1;
 cout<<endl;
 }
}
  string value1(int num3)
 {
  if(num3==0)
  {
  
   return " ";
  }
  if(num3==1)
  {
  
   return "one";
  }
  if(num3==2)
  {
   
   return "two";
  }
  if(num3==3)
  {
  
   return "three";
  }
  if(num3==4)
  {
   
   return "four";
  }
  if(num3==5)
  {
   
   return "five";
  }
  if(num3==6)
  {
  
   return "six";
  }
  if(num3==7)
  {
   
   return "seven";
  }
  if(num3==8)
  {
   
   return "eight";
  }
  if(num3==9)
  {
   
   return "nine";
  }
  if(num3==10)
  {
  
   return "ten";
  }
  
  return 0;
 }

 string value2(int num2)
 {
  if(num2==0)
  {
  
   return " ";
  }
 if(num2==2)
  {
  
   return "Twenty";
  }
  if(num2==3)
  {
   
   return "thirty";
  }
  if(num2==4)
  {
   
   return "fourty";
  }
  if(num2==5)
  {
   
   return "fifty";
  }
  if(num2==6)
  {
   
   return "sixty";
  }
  if(num2==7)
  {
  
   return "seventy";
  }
  if(num2==8)
  {
  
   return "eighty";
  }
  if(num2==9)
  {
  
   return "ninty";
  }
  return 0;

 }
 
 