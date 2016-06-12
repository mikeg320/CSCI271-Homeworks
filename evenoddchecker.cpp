#include <iostream>

using namespace std;
int main()
{
    int x, y; // run for 3, 6
    cout << "give two integers, eg 3 and then 6" << endl;
    cin >> x >> y;

    if (x % 2 == 0)                // I used && origanlly but this felt more efficent 
    {
    if (y % 2 ==0)
    cout << x << " and " << y  << " are both" << endl;
    }else
     cout<< x << "odd"<<endl;
    return 0;
}
