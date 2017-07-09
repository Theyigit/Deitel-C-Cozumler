/* 1'den 5'e kadar olan sayýlarýn faktöriyellerini hesaplayýp çizelge þeklinde ekrana yazan prgram istendi. // YAZAN: Yiðit YILMAZ */

#include <stdio.h>
#include <conio.h>

int main()
{
    long x, carpim=1;

    for(x=1;x<=5;x++){
        carpim*=x;
        printf("%d! = %d\n", x,carpim);
    }
    getch();
    return 0;
}
/* Ayrýca "20! hesaplamada karþýnýza çýkacak sorun ne olur?", sorusunun cevabý 20! deðerinin long aralýðýndaki - 2147483647 -
deðerlerden büyük olmasý nedeniyle yanlýþ olarak gösterildiði olacaktýr. */
