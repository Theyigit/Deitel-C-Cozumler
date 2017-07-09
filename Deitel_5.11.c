/* Girilen bir sayýyý floor fonksiyonu ile  tamsayýya, onluga, yuzluge, binlige yuvarlayan
programý yazmak istenidli // Yazan: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>
#include <math.h>

float tamsayiyayuvarla(float);
float onlugayuvarla(float);
float yuzlugeyuvarla(float);
float binligeyuvarla(float);

int main()
{
    float x;

    printf("Sayi giriniz : ");
    scanf("%f", &x);

    printf("\n\n");

    printf("Sayinin tam degeri    : %f\n", tamsayiyayuvarla(x));
    printf("Sayinin onluk degeri  : %f\n", onlugayuvarla(x));
    printf("Sayinin yuzluk degeri : %f\n",yuzlugeyuvarla(x));
    printf("Sayinin binlik degeri : %f\n", binligeyuvarla(x));



    getch();
    return 0;
}

float tamsayiyayuvarla(float sayi){
    return floor(sayi + .5);
}

float onlugayuvarla(float sayi){
    return floor(sayi*10 + .5)/ 10;
}

float yuzlugeyuvarla(float sayi){
    return floor(sayi*100 + .5)/100;
}

float binligeyuvarla(float sayi){
    return floor(sayi*1000 + .5)/1000;
}

