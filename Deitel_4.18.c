/* Kullan�c�dan (1-30 aras�nda) 5 say� alan ve her sat�ra o say� kadar "*" ifadesi yazan
program istendi. YAZAN: Yi�it YILMAZ */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, sayac;

    for(x=1;x<=5;x++){
        printf("1-30 arasinda bir sayi giriniz : ");
        scanf("%d", &y);

        for(sayac=1;sayac<=y;sayac++)
            printf("*");

        printf("\n");

    }
    getch();
    return 0;
}
