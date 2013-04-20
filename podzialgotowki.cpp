/*Podzia³ gotówki

System monetarny Bitolandii odbiega nieco od naszego systemu. Obiegow¹ walut¹ jest bitalar, zaœ nomina³y banknotów to ró¿ne liczby ca³kowite od 1 do 100000. Monet nie u¿ywa siê.

Dwaj z³odzieje obrabowali bank w stolicy Bitolandii. Wynieœli z jego skarbca spor¹ iloœæ banknotów o ró¿nych nomina³ach.  Po powrocie do swojej kryjówki postanowili podzieliæ ³up na dwie równe czêœci, ale okaza³o siê, ¿e mog¹ z tym mieæ problem: niektóre banknoty trzeba by³o rozmieniæ na drobniejsze.

Napisz program, który czyta opis zdobyczy z³odziei i odpowiada na pytanie, czy mo¿liwy jest podzia³ gotówki na dwie po³owy bez rozmieniania banknotów
*/

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
