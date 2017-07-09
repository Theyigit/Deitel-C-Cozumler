/*5.19'daki fonksiyonu karenin icinin kullancidan alinan sekille doldurulmasi istendi. //YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>

int fonk(int x, char y);
int main()
{
    int kenar;
    char icinidoldur;

    printf("Karenizin kenar sayisini ve seklini giriniz :");
    scanf("%d%c", &kenar,&icinidoldur);
    printf("\n\n");

    fonk(kenar,icinidoldur);

    getch();
    return 0;
}

int fonk(int x, char y){

    int a=1,b;

     for(;a<=x;a++){
         for(b=1;b<=x;b++)
            printf("%c", y);
         printf("\n");
    }
    return 0;
}
