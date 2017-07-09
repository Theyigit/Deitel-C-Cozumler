/* Belirtilen kumeden bir sayiyi rasgele secen ve o sayiyi ekrana yazdiran bir fonksiyon istenildi. Yazan: Yigit YILMAZ */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    printf("2,4,6,8 kumesinden secilen eleman   : %d\n", (1+rand()%4)*2);
    printf("3,5,7,9,11 kumesinden secilen eleman: %d\n", ((1+rand()%5)*2)+1);
    printf("6,10,14,18,22 kumesinden secilen eleman: %d\n", (1+rand()%4)*4+2);

    getch ();
    return 0;
}
