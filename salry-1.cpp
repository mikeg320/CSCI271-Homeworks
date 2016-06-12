#include <iostream>
using namespace std;

int main()
{
    double num=0, tot = 0, avg = 0;
    int k = 0;
    
    while (num != -1)
    
    do
    
    {
          cout<<"enter a number"<<endl;
          cin>>num;
          if(num == -1)
          break;
          tot = tot + num;
          k++;
          }while (num != -1);

          cout<<k<<endl;
          avg = tot/k;
          cout<<"average "<<avg<<endl;

          system("pause");
          return 0;
}
