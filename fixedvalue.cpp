#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double f = 0.123456789123456789, a=0;
    cout << "the regular format for f = " << f << endl;
    cout << "the format for f using fixed = " << fixed << f << endl;

    cout << setprecision(3);
    cout << "the format for f with precision 3 = " << f << endl;

    cout << "enter a positive integer" << endl;
        cin>>a;
    cout<< setprecision(a);
    cout<< "the updated format for f using precision of a ="<<f<<endl;
    
    
    return 0;
}
