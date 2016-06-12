#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

   int main()
   {
     srand( time( 0));    //seed for random
     
     int dice1, dice2, sum;
     
     for(int k = 0;   k<8;  k++)
     {
        dice1  = 1 + rand() % 6;
        dice2  = 1 + rand() % 6;
        
        
       sum = dice1+ dice2;
       
       cout<<sum<<endl;
       cout<<endl;
       
       }
       
       system("pause");
       return 0;
       
       } 
       
     

