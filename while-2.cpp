#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Would you like to see the base of the integers (type 1 for yes, 0 for no)" << endl;
    int answer;
    cin >> answer;
    if(answer == 1)
    {
        cout << showbase;
    }

    int i, d;
    cout << "Now give an integer <= 255" << endl;
    cin >> i;

    d = i;
    cout << "We are analyzing the octal and hexadecimal representations of the decimal number " << d << endl;
    cout << "The octal digits for " << oct << d << " are:" << endl;
    cout << oct << " " << d % 8 << endl;
    d /= 8;
    cout << oct << " " << d % 8 << endl;
    d /= 8;
    cout << oct << " " << d % 8 << endl;

    d = i;
    cout << "The hexadecimal digits for " << hex << d << " are:" << endl;
    cout << hex << " " << d % 16 << endl;
    d /= 16;
    cout << hex << " " << d % 16 << endl;

    return 0;
}
    
