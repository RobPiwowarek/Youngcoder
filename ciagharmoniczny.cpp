//Oblicz sume n pierwszych wyrazów ciagu harmonicznego
//Zadanie z konkursu Youngcoder 2013

#include <iostream>
#include <stdio.h>
using namespace std;

double wyliczciag(int n);

main()
{
      int n; 
      cin >> n;
      printf("%.10f\n", wyliczciag(n));
}

double wyliczciag(int n)
{
       double wynik = 0.0;
       
       for (int i = 1; i <= n; i++)
       {
           wynik = wynik + (double)(1.0/i);
           }   
           return wynik;
       }

