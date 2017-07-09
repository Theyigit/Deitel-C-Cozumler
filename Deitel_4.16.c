/* for döngüsü kullanýlarak "*" ifadeleriyle alt alta 4 tane diküçgen oluþturulmasý istendi.
//YAZAN: Yiðit YILMAZ */
#include <stdio.h>
#include <conio.h>

int main()
{
    int x, y, z;

    for(z=1;z<=4;z++){

        if(z%2!=0){
            for(x=1;x<=10;x++){
                for(y=1;y<=x;y++)
                    printf("*");
            printf("\n");
    } }

        else
            for(x=10;x>=1;x--){
               for(y=1;y<=x;y++)
                    printf("*");
            printf("\n");
            }
        printf("\n");
   }
    getch();
    return 0;
}
