/* Bir onceki ornegin cevaplarinin degisik verilmesi istendi. //YAZAN Yigit YILMAZ */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
    int a,b,c,cevap;

    srand(time(NULL));


    while(cevap!=-1){

    a=1+rand()%9;
    b=1+rand()%9;
    c=1+rand()%4;

    printf("%d kere %d kac eder: \n", a,b);
    scanf("%d", &cevap);

    while(cevap!=a*b){
        switch(c){
        case 1:
        printf("Hayir.Lutfen tekrar deneyin! ");
        break;
        case 2:
        printf("Yanlis lutfen bir daha deneyin! ");
        break;
        case 3:
        printf("Pes etmeyin! ");
        break;
        case 4:
        printf("Hayir.Denemeye devam edin! ");
        break; }


        scanf("%d", &cevap);
    }

    switch(c){
        case 1:
            printf("Cok guzel!\n");
            break;
        case 2:
            printf("Mukemmel!\n");
            break;
        case 3:
            printf("Aferin boyle devam et!\n");
            break;
        case 4:
            printf("Harikasin!\n");
            break;
    }

}
    getch();
    return 0;
}



