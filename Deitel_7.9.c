/* Gostericiler konusuyla ilgili kucuk alistirmalar yapmamiz istendi.
   Ilgilenenler: Deitel Sayfa-292 //YAZAN: Yigit YILMAZ */

#include <stdio.h>
#include <conio.h>
#define BOYUT 5

int main()
{
     unsigned int degerler[BOYUT]={2,4,6,8,10};
     unsigned int *vPtr=degerler;


     int i, offset;



    printf("Degerler dizisi elemanlari:\n");
    for(i=0;i<BOYUT;i++)
        printf("degerler[%d]=%u\n", i, degerler[i]);  //unsigned olarak tanimlandigi icin %u kullandik




    printf("\nDegerler dizisi gosterici/offset yontemi:\n\n");

    for(offset=0;offset<BOYUT;offset++)
        printf("*(vPtr + %d) = %u\n", offset, *(vPtr + offset));

    printf("\nDegerler dizisi gosterici/belirtec yontemi:\n\n");

    for(i=0;i<BOYUT;i++)
        printf("vPtr[%d]=%u\n", i, vPtr[i]);

    printf("\ndegerler[%d]=%u\n", 4, degerler[4]); // eleman 5 in dizi, offset, gosterici belirtec olarak gosterilmesi istendi.
    printf("*(vPtr+%d) = %u\n", 4, *(vPtr+4));
    printf("vPtr[%d]= %u", 4, vPtr[4]);

    getch();
    return 0;
}
