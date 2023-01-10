#include <iostream>
#include <cmath>
using namespace std;
main()
{
 int volume;
 int pool1;
 int pool2;
 float hourse;
 float totalp1;
 float totalp2;
 float totalfill;
 float perofvolume;
 float perp1;
 float perp2;
 float overflow;
 int total1;
 int total2;
 

 cout<<"Enter volume of the pool: ";
 cin>>volume;
 cout<<"Enter flow rate of pool1: ";
 cin>>pool1;
 cout<<"Enter flow rate of pool2: ";
 cin>>pool2;
 cout<<"Enter worker's absent hourse: ";
 cin>>hourse;
 totalp1=pool1*hourse;
 totalp2=pool2*hourse;
 totalfill=totalp1+totalp2;
 if(volume>totalfill)
 {
  perofvolume=(totalfill*100)/volume;
  perp1=(totalp1*100)/totalfill;
  total1=floor(perp1);
  perp2=(totalp2*100)/totalfill;
  total2=floor(perp2);
  cout<<"The pool is "<<perofvolume<<" fill. Pipe1: "<<total1<<"% "<<"Pipe2: "<<total2<<"%";
 }
 if(volume<totalfill)
 {
  overflow=totalfill-volume;
  cout<<"For "<<hourse<<" hourse the pool overflows with "<<overflow<<" liters. ";
 }
 
 
}