#include<iostream>
#include<cmath>
using namespace std;

      double cont(double , double ); //function prototype
      int main ()
      {
          double a= 0, b=0, c=0;
          cout<<"enter initial and years"<<endl;
          cin>>a>>b;
          c=cont(a,b); //function call name of function and the arguments inside ()
          cout<<"amount "<<c<<endl;
          system("pause");
          return 0;
          }
          double cont(double x, double y) //definition of function =(HEADER AND INSIDE BRACES)
          { if(x<10000)
            return 0;
              double z = 0;
              z= x * exp((0.03 * y));
              return z;
          }
