#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int a,b,c,d;
   float x1,x2;
   cout << "a=";
   cin >> a;
   cout << "b=";
   cin >> b;
   cout << "c=";
   cin >> c;
   if (a!=0) {
       d=((b*b)-4*a*c);
        if (d>=0) {
            x1=(-b+(sqrt(d)))/(2*a);
            x2=(-b-(sqrt(d)))/(2*a);
            cout << "x1=" << x1 << endl;
            cout << "x2=" << x2 << endl;
        }
            else
                cout << "Ecuatia nu are solutii reale. Ecuatia are solutii complexe.";

   }
return 0;
}
