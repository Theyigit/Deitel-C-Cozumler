/* 0-100 arasindaki derece cinsinden sicakliklari fahrenhayt'a 2-212 arasýndaki Fahrenheit sicakliklarini
dereceye cevirip ekrana tablo halinde yazan bir program istendi. // YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>

float derece(int d);
float fahrenhayt(int f);

int main()
{
    int x,y=1;

    for(x=1;x<=100;x++){
        printf("%d  derece = %.2f fahrenheit  ||", x,derece(x));

        printf(" %d fahrenheit = %.2f derece\n",y,fahrenhayt(y));

        y++;
    }
    for(y=101;y<=212;y++){
         printf(" %37d fahrenheit = %.2f derece\n",y,fahrenhayt(y));
    }
    getch();
    return 0;
}

float derece(int d){
    return (d*9/5)+32;
}

float fahrenhayt(int f){
    return (f-32)*5/9;
}
