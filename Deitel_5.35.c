/* 1-1000 arasinda bir sayi ureten ve bu sayiyi kullanicinin tahmin etmesini saglayan program istendi.
YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));

    int x, tahmin;

    x=1+rand()%1000;

    printf("1-1000 arasinda bir sayi tuttum\nTahmin edebilir misin?\n");
    printf("Lutfen ilk tahminini gir:");
    scanf("%d", &tahmin);



    while(x!=tahmin){

        if(x<tahmin)
            printf("%d rakami cok buyuk. Tekrar deneyin:", tahmin);
        else if(x>tahmin)
            printf("%d rakami cok kucuk. Tekrar deneyin:", tahmin);

        scanf("%d", &tahmin);
    }

    printf("\nMukemmel bildiniz!");



    getch();
    return 0;
}
