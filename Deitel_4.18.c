/* Kullanýcýdan (1-30 arasýnda) 5 sayý alan ve her satýra o sayý kadar "*" ifadesi yazan
program istendi. YAZAN: Yiðit YILMAZ */
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
