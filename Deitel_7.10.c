/* Gostericiler konusunda kucuk alistirmalar yapilmasi istendi. Ilgilenenler icin:
   Deitel Sayfa-293 //YAZAN: Yigit YILMAZ */

#include <stdio.h>
#include <conio.h>

int main()
{
    long int deger1=200000, deger2;
    long int *IPtr=deger1;



    printf("IPtr gostericisinin degeri: %ld\n", IPtr); // long integer olarak belirtildigi icin %ld olarak tanimladik.

    deger2=IPtr; // IPtr gostericisinin degerini deger2'ye atadik.

    printf("deger2 degiskeninin degeri: %ld\n", deger2);

    printf("deger1 degiskeninin adresi: %p\n", deger1);

    printf("IPtr gostericisinin adresi: %p", IPtr);


    getch();
    return 0;
}
