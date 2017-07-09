/* Kullanicidan 5 ondalikli sayi alan ve y = floor(x + .5) degerini en yakin sayiya yuvarlayarak bir tablo olusturan program
istendi. // Yazan : Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int i;
    float x, y;

    for(i=1;i<=5;i++){
        printf("\nSayi girin : ");
        scanf("%f", &x);

        y = floor(x + .5);

        printf("\n\n%20.2f%20.2f", x, y);
    }
    getch();
    return 0;
}
