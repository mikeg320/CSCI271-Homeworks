#include<iostream>
using namespace std;
int main()
{
	//int uses 4 bytes per line :D 
	int a[5] = {2,4,6,8,10};
	double b[5]= {1,3,5,7,9};
	int *px= NULL;
	px=&a[0];
	cout<<*px<<endl;
	px++;
	cout<<*px<<endl;
	
	double *wx= NULL;
	wx= &b[0];
	cout<<*wx<<endl;
	// * is the variavble it points to. 
	wx++;
	cout<<*wx<<endl;
	cout<<"address of a[0] "<<&a[0]<<endl;
	cout<<"address of a[1]"<<&a[1]<<endl;
	cout<<"address of a[2]"<<&a[2]<<endl;
	cout<<"address of a[3]"<<&a[3]<<endl;
	
	cout<<"address of b[0]"<<&b[0]<<endl;
	cout<<"address of b[1]"<<&b[1]<<endl;
	system("pause");
return 0;
}
