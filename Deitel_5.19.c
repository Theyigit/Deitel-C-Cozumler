/*Ekranin soluna dayali olarak yildiz karakterlerinden olusan ve kenari, kenar tamsayi degiskeni ile alinan
bir fonksiyon istendi. //YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>

void fonk(int x);
int main()
{
    int kenar;
    printf("Kareniz kac kenarli olsun?");
    scanf("%d", &kenar);
    printf("\n\n");

    fonk(kenar);

    getch();
    return 0;
}

void fonk(int x){

    int a=1,b;

     for(;a<=x;a++){
         for(b=1;b<=x;b++)
            printf("*");
         printf("\n");

    }
}
