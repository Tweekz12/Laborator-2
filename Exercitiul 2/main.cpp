#include <iostream>

using namespace std;

int main()
{
    double x;
    cout << "x=";
    cin >> x;
    if (x<0)
        cout << "Modulul lui x este: " << (x*-1) << endl;
    else
        cout << "Modulul lui x este: " << x << endl;
    return 0;
}
