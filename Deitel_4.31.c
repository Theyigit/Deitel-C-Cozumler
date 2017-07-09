/* Ekrana eskenar dortgen yazdirilmasi istendi. //YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>

int main()
{ int x, y, z;

   for(x=1;x<=5;x++){
        for(y=1;y<=5-x;y++)
            printf(" ");
        for(z=1;z<=2*x-1;z++)
            printf("*");
        printf("\n");
   }

   for(x=1;x<=4;x++){
        for(y=1;y<=x;y++)
            printf(" ");
        for(z=1;z<=9-2*x;z++)
            printf("*");
        printf("\n");
   }
    getch();
    return 0;
}
