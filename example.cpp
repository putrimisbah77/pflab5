#include <iostream>
using namespace std;
int add(int number1, int number2);
int mul(int number1,int number2);
int isGreater(int number1,int number2);
main()

{
  int number1;
  int number2;
  int total;
  cout<<"Enter number1: ";
  cin>>number1;
  cout<<"Enter number2: ";
  cin>>number2;
  total=isGreater(number1,number2);
  cout<<total<<" is greater.";

}
 int add(int number1,int number2)
{
  int sum=number1+number2;
  return sum;
}
 int mul(int number1,int number2)
 {
  int mul=number1*number2;
  return mul;
 } 
  int isGreater(int number1,int number2)
 {
  if(number1>number2)
  {
   return number1;
  }
  if(number1<number2)
  {
   return number2;
  }
  return 0;
}