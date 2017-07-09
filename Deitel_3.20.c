#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
  float anapara, faizOrani, gun, faiz;

  printf("\nAnaparayi girin (cikis icin -1):");
  scanf("%f", &anapara);

  printf("\nFaiz oranini girin:");
  scanf("%f", &faizOrani);

  printf("\nKac gunluk faiz:");
  scanf("%f", &gun);

  faiz = anapara * faizOrani * gun/365;

  printf("\nFaiz ucreti %f $", faiz);

  while(anapara!=-1){

  printf("\nAnaparayi girin (cikis icin -1):");
  scanf("%f", &anapara);

  printf("\nFaiz oranini girin:");
  scanf("%f", &faizOrani);

  printf("\nKac gunluk faiz:");
  scanf("%f", &gun);

  faiz = anapara * faizOrani * gun/365;

  printf("\nFaiz ucreti %f $", faiz);

  }
   return 0;
   getch ();
}
