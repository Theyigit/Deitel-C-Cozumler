/* Iki zari 36000 kere atan ve toplamlarini bir diziye atayan, daha sonra bu toplamlari
   ekrana yazan program istendi. //YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define BOYUT 36000

int main()
{
    int zar1,zar2,x,toplam[BOYUT]={};

    srand(time(NULL));

    for(x=0;x<=36000;x++){
        zar1 = 1 + rand()%6;
        zar2 = 1 + rand()%6;

        toplam[x]=zar1+zar2;

        printf("\n\n   %d + %d = %d", zar1,zar2,toplam[x]);
        printf("\n");
    }



    getch();
    return 0;
}
