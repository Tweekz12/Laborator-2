#include <iostream>

using namespace std;
int main()
{
    int a,b,c;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    if (a<b && a<c) {
        cout << a << "<";
        if (b<c)
            cout << b << "<" << c;
        else
            cout << c << "<" << b;
    }
    if (b<a && b<c) {
        cout << b << "<";
        if (a<c)
            cout << a << "<" << c;
        else
            cout << c << "<" << a;
    }
    if (c<a && c<b) {
        cout << c << "<";
        if (a<b)
            cout << a << "<" << b;
        else
            cout << b << "<" << a;
    }
    return 0;
}
