/* Birka� say�n�n ortalamas�n� bulan ve ekrana yazd�ran bir program istendi. scanf ile al�nacak son say� 9999 olacak.
�rnek: " 10 8 11 7 9 9999" 9999 ortalamaya dahil edilmeyecek. // Yazan: Yi�it YILMAZ */

#include <stdio.h>
#include <conio.h>

 int main(){

 float x, sayac=0, toplam=0;
 float ortalama;

 printf("Ortalamasini almak istediginiz sayilari girin(Cikmak icin 9999 giriniz!):\n");
 scanf("%f", &x);

 while(x!=9999){
    toplam+=x;
    scanf("%f", &x);
    sayac++;
 }
  ortalama = toplam / sayac;
  printf("\nGirilen sayilarin ortalamasi: %.3f", ortalama);

 getch();
 return 0;
}
