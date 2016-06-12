#include<iostream>
using namespace std;
int main()
	{
	double salary = 0;
	cout<<"enter a salary "<<endl;
	cin>>salary;
	if(salary < 0 && salary > 100000)
	cout<<"out of range "<<endl;
	else
	if(salary <=60000 && salary > 40000)
	salary = salary + 0.10 * salary;
	else
	if(salary <= 40000 && salary >= 20000)
	salary = salary + .50 * salary;
	cout<<salary<<endl;
	system("pause");
	return 0;
	}
