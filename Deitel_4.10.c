/* Birkaç sayýnýn ortalamasýný bulan ve ekrana yazdýran bir program istendi. scanf ile alýnacak son sayý 9999 olacak.
Örnek: " 10 8 11 7 9 9999" 9999 ortalamaya dahil edilmeyecek. // Yazan: Yiðit YILMAZ */

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
