#include<iostream>
using namespace std;
const int SENTINEL = 100;
int main()
{

    int number=0, sum= 0; 
	cout<<"enter a number \n";
	
	 while(number != SENTINEL) {     // class review while cin >> n && n != 100
	
    cin>>number;
    sum = sum + number;
	 }
   cout<<sum;
   
return 0; 
}
