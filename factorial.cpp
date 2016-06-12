#include <iostream>
using namespace std;
int main()
{
    int num=0, fac= 1, end = 0;
    cout<<"enter number"<<endl;
    cin>>num;
    end = num;
    for(int k=0; k<end; k++)
    {
            fac = fac * num;
            num--;
            }
            cout<<fac<<endl;
            
            system("pause");
            return 0;
            }
