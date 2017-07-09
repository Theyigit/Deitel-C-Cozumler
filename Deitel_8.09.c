/* strcmp fonksiyonunu kullanarak kullanicinin girdigi iki metini karsilastiran program istendi
 Yazan: Yigit YILMAZ */

#include <stdio.h>
#include <conio.h>
#include <string.h>  // strcmp string kutuphanesine dahildir.

int main()
{
    char  metin1[100], metin2[100];

    printf("Ilk metini giriniz   :");
    gets(metin1);

    printf("Ikinci metini giriniz:");
    gets(metin2);                   // gets fonksiyonunu kullanarak kullanicinin girdigi
                                   //  degeri degiskene atiyoruz.


    printf("\n\n\tSONUC\n");

    if(strcmp(metin1,metin2)== 0)
        printf("%s ile %s ayni metinlerdir.", metin1, metin2);

    else if(strcmp(metin1,metin2)< 0)
        printf("%s alfabede %s den once gelir.", metin1, metin2);

    else
        printf("%s alfabede %s den once gelir.", metin2, metin1);

    getch();
    return 0;
}
