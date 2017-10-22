#include <iostream>
#include <conio.h>
#include <stdio.h>
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
 if (a>b && a>c && b!=c) {
    if ((a*a==(b*b)+(c*c)))
        cout << "Triunghiul este dreptunghic." << endl;
    else
        cout << "Triunghiul este oarecare." << endl;
 }
  if (b>a && b>c && a!=c) {
    if ((b*b==(a*a)+(c*c)))
        cout << "Triunghiul este dreptunghic." << endl;
    else
        cout << "Triunghiul este oarecare." << endl;
 }
 if (c>a && c>b && b!=a) {
    if ((c*c==(a*a)+(b*b)))
        cout << "Triunghiul este dreptunghic." << endl;
    else
        cout << "Triunghiul este oarecare." << endl;
 }
 if (a==b && a==c && b==c)
    cout << "Triunghiul este echilateral." << endl;
 if (a==b && a!=c && b!=c)
    cout << "Triunghiul este isoscel." << endl;
 if (a==c && a!=b && c!=b)
    cout << "Triunghiul este isoscel." << endl;
 if (b==c && b!=a && c!=a)
    cout << "Triunghiul este isoscel." << endl;
return 0;
 }

