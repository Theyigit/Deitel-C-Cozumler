#include <stdio.h>
#include <conio.h>

int main()
{
    int satir=1, sutun=1, girinti=1;

    while(satir<9){
        sutun=1;

        if(girinti%2 == 1) {

        while(sutun<18){
            if(sutun%2 == 1)
                printf("*");
            else
                printf(" ");

            sutun++;    }
        satir++;
        printf("\n"); }

        if(girinti%2 == 0) {

        while(sutun<18){

            if(sutun%2 == 1)
                printf(" ");

            else
                printf("*");

            sutun++;    }
        satir++;
        printf("\n"); }
        girinti++;

        }





    getch();
    return 0;
}
