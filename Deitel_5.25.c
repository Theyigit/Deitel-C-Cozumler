/* float türünde 3 sayinin en kucugunu donduren bir fonksioyn istendi. // YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>

float enkucuk(float a, float b,float c);

int main()
{
    float x,y,z;

    printf("3 ondalikli sayi giriniz :\n");
    scanf("%5f%5f%5f", &x,&y,&z);

    printf("\n\nGirdiginiz sayilardan en kucugu: %.1f", enkucuk(x,y,z));

    getch();
    return 0;
}

float enkucuk(float a, float b, float c){
    float min;
    min=a;

    if(b<min)
        return b;
    else if(c<min)
        return c;
    else
        return a;
}
