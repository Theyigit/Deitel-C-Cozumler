/* 1-1000 arasinda bir sayi ureten ve bu sayiyi kullanicinin tahmin etmesini saglayan programa 10 tahminde
bilip bilmedigine gore yorumlama ilavesi istendi. YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));

    int x, tahmin, sayac=0;

    x=1+rand()%1000;
    printf("%d", x);
    printf("1-1000 arasinda bir sayi tuttum\nTahmin edebilir misin?\n");
    printf("Lutfen ilk tahminini gir:");
    scanf("%d", &tahmin);
    sayac++;


    while(x!=tahmin){

        if(x<tahmin)
            printf("%d rakami cok buyuk. Tekrar deneyin:", tahmin);
        else if(x>tahmin)
            printf("%d rakami cok kucuk. Tekrar deneyin:", tahmin);
        sayac++;
        scanf("%d", &tahmin);
    }

    printf("\nMukemmel bildiniz!");
    printf("\n %d tahminde bildiniz.", sayac);

    if(sayac<10)
        printf("\n\n       Siz sirri biliyorsunuz ya da sanslisiniz!");
    else if(sayac==10)
        printf("\n\n       Aha! Siz sirri biliyorsunuz.");
    else
        printf("\n\n       Daha iyisini yapabilirsiniz.");


    getch();
    return 0;
}
