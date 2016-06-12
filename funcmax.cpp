#include<iostream>
using namespace std;

   int max(int,int, int);

       int main()
       {
         int   e = 7, f = 8, g = 3;
         
         cout<<max(e,f,g)<<endl;
          system("pause");
          return 0;  
           
                     
           }
   int max(int a, int b, int c)
   {
       int m = a;
       if(b>m) 
       m = b;
       if(c>m)
       m = c;
       return m;
}
