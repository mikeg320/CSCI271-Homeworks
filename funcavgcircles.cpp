#include<iostream>
#include<cmath>
using namespace std;


 double area(double, double);
 double average(double, double);
 
 int main()
 {
   double Pi = 3.14, r1 = 0, r2 = 0, a1 = 0, a2 = 0, avg = 0;
   
   cout<<"enter radius1"<<endl;
   cin>>r1;
   cout<<"enter radius2"<<endl;
   cin>>r2;
   
   a1 = area(Pi, r1);
   
   a2 = area(Pi, r2);
   
   avg = average(a1, a2);
   cout<<"average "<<avg<<endl;
   
   system("pause");
   return 0;
   
  }
   
   double area(double p, double r)
   {
   double a;
   a = p * pow(r,2);
   return a;
  }
  
  double average(double x1, double x2)
  {
    double av;
    av = (x1 + x2)/2;
    return av;
 }
   
