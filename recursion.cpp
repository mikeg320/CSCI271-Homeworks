
#include<iostream>
using namespace std;
                     // function prototype
 unsigned long factorial(unsigned  long);

 int num;
 main()
{
   cout <<"enter number"<<endl;
   cin >> num;

     cout<<factorial(num)<<endl;

      system("pause");
        return 0;
}
               //function definition
   unsigned long factorial (unsigned long num)
  {
  if(num <= 1)
  return 1;

  else                  // recursive  step
    return num * factorial(num -1);
  }
