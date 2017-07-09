/* Bu projede bizden strncmp fonksiyonunu kullanarak kullanicidan iki metin girisiyle
   beraber bu metinlerin ilk kac harfinin karsilastirilmasi gerektigini isteyen bir
   program istendi. // Yazan: Yigit YILMAZ */

#include <stdio.h>
#include <string.h> // strncmp fonksiyonu string kutuphanesindedir.

int main()
{
    char metin1[100], metin2[100];
    int sayi;

    printf("Ilk metini giriniz   :");
    gets(metin1);

    printf("Ikinci metini giriniz:");
    gets(metin2);                  // gets fonksiyonu kullanicinin girdigi degeri degiskene atar.

    printf("\nKarsilastirmak istediginiz karakter sayisi kactir:");
    scanf("%d", &sayi);


    printf("\n\tSONUC\n");

    if(strncmp(metin1,metin2,sayi)==NULL)
        printf("%s ve %s alfabede ayni yerdedirler.", metin1, metin2);

    else if(strncmp(metin1,metin2,sayi)< 0)
        printf("%s alfabede %s den once gelir.", metin1, metin2);

    else
        printf("%s alfabede %s den once gelir.", metin2, metin1);



    getch();
    return 0;
}
