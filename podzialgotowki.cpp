/*Podzia� got�wki

System monetarny Bitolandii odbiega nieco od naszego systemu. 
Obiegowa waluta jest bitalar, zas nominaly banknotow to rozne liczby calkowite od 1 do 100000. 
Monet nie uzywa sie.

Dwaj zlodzieje obrabowali bank w stolicy Bitolandii. 
Wyniesli z jego skarbca spora ilosc banknotow o ronych nominalach.  
Po powrocie do swojej kryjowki postanowili podzielic lup na dwie rowne czesci, ale 
okazalo sie, ze moga z tym miec problem: niektore banknoty trzeba bylo rozmienic na drobniejsze.

Napisz program, ktory czyta opis zdobyczy zlodziei i odpowiada na pytanie, 
czy mozliwy jest podzial gotowki na dwie polowy bez rozmieniania banknotow
*/

// zadanie z konkurs youngcoder 2013

#include <stdio.h>
#include <iostream>
#define N 100000
using namespace std;

void sort(int *tabnomi, int rozmiar, int *tabilosc);

main()
{
      int rodzaje = 0;
      int dane1[N];
      int dane2[N];
      int suma = 0;
      
      scanf("%d", &rodzaje);
      getchar();
      
      for (int i = 0; i < rodzaje; i++)
      {
          scanf("%d", &dane1[i]);
          getchar();
          scanf("%d", &dane2[i]);
          getchar();
      }
      
      sort(dane1,rodzaje,dane2); 
      
      for (int i = 0; i < rodzaje; i++)
      {
          suma += dane1[i] * dane2[i];
          }
                
          if (suma % 2 == 0)
          {
                   int polowa = suma / 2;
                   int dol = 0;
                   int gora = 0;
                   
                   for (int i = 0; i < rodzaje; i++)
                   {       
                           for (int j = 0; j < dane2[i]; j++)
                           {
                               gora += dane1[i];
                               if (gora == polowa)
                               {
                                        printf("TAK\n");
                                        return 0;
                                        }
                                        else if (gora > polowa)
                                        {
                                             gora -= dane1[i];
                                             break;
                                             }
                           }
                       }
                   }
                   printf("NIE\n");
                   }
                   
void sort(int *tabnomi, int rozmiar, int *tabilosc)
{
	int n = rozmiar-1; 
	int temp, temp2;
	bool zamiana;
	while (true)
	{
		zamiana=false; 
		for (int i=0;i<n;i++)
		{
			if (tabnomi[i]<tabnomi[i+1])
			{
				zamiana=true;
				temp=tabnomi[i];
				temp2=tabilosc[i];
				tabnomi[i]=tabnomi[i+1];
				tabilosc[i]=tabilosc[i+1];
				tabnomi[i+1]=temp;
				tabilosc[i+1]=temp2;
			}
		}
		if (!zamiana)
			break;
	}
}
