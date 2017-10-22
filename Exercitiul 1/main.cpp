#include <iostream>

using namespace std;

int main()
{
   int a,b,c;
   int min;
   cout << "a=";
   cin >> a;
   cout << "b=";
   cin >> b;
   cout << "c=";
   cin >> c;
   if (a<=b && a<=c)
        min=a;
   if (b<=a && b<=c)
        min=b;
   if (c<=a && c<=b)
        min=c;
   cout << "Valoarea minima este: " << min;
}
