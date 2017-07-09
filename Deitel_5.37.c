/* kuvvet(taban,us) seklinde yinelenen bir fonksiyon yazilip taban uzeri us degerinin bulunmasi istendi.
YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>
#include <math.h>
int kuvvet(int taban, int us);
int main()
{
    int taban, us;

    printf("Taban gir:");
    scanf("%d", &taban);
    printf("Us gir   :");
    scanf("%d", &us);
    printf("\n\n %d uzeri %d = %d",taban,us,kuvvet(taban,us));


    getch();
    return 0;
}
int kuvvet(int taban, int us){

    if(us<=1)
        return 1;
    else
        return taban * pow(taban,(us-1));
}
