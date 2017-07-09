#include <stdio.h>
#include <conio.h>

int main()
{
   float ucret, sonuc, toplam, maas;
   maas = 200;

   printf("\nDolar cinsinden satis tutarini giriniz (Cikis icin -1):");
   scanf("%f", &ucret);
   sonuc = ucret*9/100;

      toplam = sonuc + maas;
      printf("Maas: %f $\n", toplam);

   while(ucret != -1){
      printf("\nDolar cinsinden satis tutarini giriniz (Cikis icin -1):");
      scanf("%f", &ucret);
      sonuc = ucret*9/100;

      toplam = sonuc + maas;
      printf("Maas: %f\n", toplam);
   }

    getch ();
    return 0;

}

