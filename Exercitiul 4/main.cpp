#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c,p;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    if (a>0 && b>0 && c>0 && (a+b>c) && (a+c>b) && (b+c>a)) {
        p=((a+b+c)/2);
        cout << "Aria triunghiului este: " << (sqrt(p*(p-a)*(p-b)*(p-c))) << endl;
        cout << "Perimetrul triunghiului este: " << (a+b+c) << endl;
    }
    else
        cout << "Triunghiul nu exista.";

    return 0;
}
