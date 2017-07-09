/* Kullanicidan 1-19 arasinda bir tek tamsayi isteyen ve bu sayi kadar satirda
eskenar ucgen cizdirilmesi istendi. //YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>

int main()
{
    int x, y, z, t, u;
    float s;
    printf("1-19 arasi bir tek tamsayi giriniz : ");
    scanf("&d", &x);


    for(y=1;y<=x/2+1;y++){
            printf("*");

    }




    getch();
    return 0;
}
