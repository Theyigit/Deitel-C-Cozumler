/* 1'den 5'e kadar olan say�lar�n fakt�riyellerini hesaplay�p �izelge �eklinde ekrana yazan prgram istendi. // YAZAN: Yi�it YILMAZ */

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
/* Ayr�ca "20! hesaplamada kar��n�za ��kacak sorun ne olur?", sorusunun cevab� 20! de�erinin long aral���ndaki - 2147483647 -
de�erlerden b�y�k olmas� nedeniyle yanl�� olarak g�sterildi�i olacakt�r. */
