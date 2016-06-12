#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    
    int k=0;
    while(k++<5)
    {
    string name, name2, city, phone, a, person;
    cout<<"enter a first name"<<endl;
    cin>>name;
    cout<<"enter a last name"<<endl;
    cin>>name2;
    cout<<"enter a city"<<endl;
    cin>>city;
   
    cout<<"enter your phone number"<<endl;
    cin>>phone;
     a = "  ";
    person= name + a + name2 + a + city + a + phone;
    cout<<person<<endl;
    string record = person;
    ofstream database;
    database.open("database.txt", ios::app); 
    database<<record<<endl;
    database.close();
}

    system("pause");
    return 0;
}
    
