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
 if (a>b&&a>c) {
    if ((a*a==(b*b)+(c*c)))
        cout << "Triunghiul este dreptunghic" << endl;
    else
        cout << "Triunghiul este oarecare" << endl;
 }
  if (b>a&&b>c) {
    if ((b*b==(a*a)+(c*c)))
        cout << "Triunghiul este dreptunghic" << endl;
    else
        cout << "Triunghiul este oarecare" << endl;
 }
 if (c>a&&c>b) {
    if ((c*c==(a*a)+(b*b)))
        cout << "Triunghiul este dreptunghic" << endl;
    else
        cout << "Triunghiul este oarecare" << endl;
 }
return 0;
 }

