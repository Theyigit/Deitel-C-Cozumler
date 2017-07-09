#include <stdio.h>
#include <conio.h>

int main()
{
    int satir=1, sutun, deger;

    printf("Deger= ");
    scanf("%d", &deger);

    while(satir<=deger){

        if(satir==1){
           sutun=1;
           while(sutun<=deger){
              printf("*");
              sutun++;}
        printf("\n");
         satir++;

           }

        else if(satir==deger){
            sutun=1;
            while(sutun<=deger){
                printf("*");
                sutun++;
            }
        printf("\n");
        satir++;
        }

        else {
            sutun=1;
            while(sutun<=deger){
                if(sutun==1) {
                    printf("*");
                     }
                else if(sutun==deger){
                    printf("*");
                    }
                else {
                    printf(" ");

                }
            sutun++;
            }
            printf("\n");
            satir++;
    }
    }

    getch();
    return 0;
}
