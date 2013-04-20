// Napisz program, ktory wyznaczy odleglosc punktu C od odcinka o koncach w punktach A i B.
// Zadanie z konkurs Youngcoder 2013

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

main()
{
    double wynik = 0.0;
    int xa = 0, ya = 0;
    int xb = 0, yb = 0;
    int xc = 0, yc = 0;
    double xs = 0.0, ys = 0.0;
    
    cin >> xa;
    cin >> ya;
    cin >> xb;
    cin >> yb;
    cin >> xc;
    cin >> yc;
    
    double suma1 = xa + xb;
    double suma2 = ya + yb;
    
    xs = suma1/2.0;
    ys = suma2/2.0;
    
    wynik = (double)sqrt((xs-xc)*(xs-xc)+(ys-yc)*(ys-yc));
    printf("%.2f\n", wynik);
}
