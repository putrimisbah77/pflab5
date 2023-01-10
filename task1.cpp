#include <iostream>
#include <cmath>
using namespace std;
double height(int degree, int base);
main()
{
 int degree;
 int base;
 float heioftree;
 float radian;
 float num;
 float hei;

 cout<<"Enter angle in degree";
 cin>>degree;
 cout<<"Enter base: ";
 cin>>base;
 heioftree=height(degree,base);
 cout<<heioftree<<" is the height of tree.";
}
 double height(int degree, int base)
 {
  float radian;
  float num;
  float hei;
 
  radian=degree*0.01745;
  num=tan(radian);
  hei=num*base;
  return hei;
 }