/* rand fonksiyonu ile iki tane 1 basamakli sayi uretip kullanicidan bunlarin carpimlarini isteyen bir program yazilacak.
Eger cevap yanlis ise tekrar tekrar soracak. //YAZAN Yigit YILMAZ */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
    int a,b,cevap;

    srand(time(NULL));


    while(cevap!=-1){

    a=1+rand()%9;
    b=1+rand()%9;

    printf("%d kere %d kac eder: \n", a,b);
    scanf("%d", &cevap);

    while(cevap!=a*b){
        printf("Lutfen tekrar deneyin: ");
        scanf("%d", &cevap);
    }

    printf("Cok guzel!\n");

}
    getch();
    return 0;
}


