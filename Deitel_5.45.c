/* Verilen iki nokta arasindaki uzakligi bulan program istenildi. //YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>
#include <math.h>

float uzaklik(float x1, float y1, float x2, float y2);
int main()
{
    float x1,y1,x2,y2;

    printf("Ilk noktanin koordinatlarini girin(x1,y1)     :\n");
    scanf("%f%f", &x1, &y1);
    printf("\nIkinci noktanin koordinatlarini girin(x2,y2)  :\n");
    scanf("%f%f", &x2, &y2);
    printf("\n\n    Iki nokta arasindaki uzaklik:  %.3f", uzaklik(x1,y1,x2,y2));


    getch();
    return 0;
}

float uzaklik(float x1, float y1, float x2, float y2){

    int x;

    x=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return x;
}
