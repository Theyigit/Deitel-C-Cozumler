/* 1'den 15'e kadar tek tamsayýlarýn çarpýmýný hesaplayan program istendi. // YAZAN: Yiðit YILMAZ */
#include <stdio.h>
#include <conio.h>

int main()
{
    int x, carpim=1;

    for(x=1;x<=15;x+=2){
        carpim*=x;
    }

    printf("1 ile 15 arasindaki teksayilarin carpimi %d", carpim);

    getch();
    return 0;
}
