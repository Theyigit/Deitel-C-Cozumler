#include <stdio.h>
#include <conio.h>

int main()
{
    int sayi, bir, iki, uc, dort;

    printf("4 Haneli numaranizi giriniz:");
    scanf("%d", &sayi);

    dort = sayi % 10;
    uc = (sayi/10) % 10;
    iki = (sayi/100) % 10;
    bir = (sayi/1000) % 10;

    dort+=7, uc+=7, iki+=7, bir+=7;

    dort%=10, uc%=10, iki%=10, bir%=10;

    printf("Sifreli sayiniz            :%d%d%d%d", uc,dort,bir,iki);


    getch();
    return 0;
}
