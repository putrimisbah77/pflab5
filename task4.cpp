#include <iostream>
using namespace std;
bool result(int sum);
main()
{
 bool istrue;
 int num;
 cout<<"Enter five digits number: ";
 cin>>num;
 int a=num%10;
 int b=(num/10)%10;
 int c=(num/100)%10;
 int d=(num/1000)%10;
 int e=num/10000;
 int sum=a+b+c+d+e;
 istrue=result(sum);
 if(istrue==true)
  {
   cout<<"It is Evenish.";
  }
  if(istrue==false)
  {
   cout<<"It is oddish.";
  }
}
 bool result(int sum)
 {
  if(sum%2 == 0)
  {
   return true;
  }
  if(sum%2 != 0)
  {
   return false;
  } 
  return 0;
 }
