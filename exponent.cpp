#include <iostream>
using namespace std;
int main()
{
    int base=0, exp = 0, ans = 1;
    cout<<"enter base"<<endl;
    cin>>base;
   cout<<"enter exponent"<<endl;
   cin>>exp;
   
   
    for(int k=0; k<exp; k++)
    {
           ans= ans * base;
            }
            cout<<ans<<endl;
            
            system("pause");
            return 0;
            }
