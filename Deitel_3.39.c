#include <stdio.h>
#include <conio.h>

int main()
{
    int sayi, sayac=0;

    printf("Sayiyi giriniz: ");
    scanf("%d", &sayi);

    if(sayi % 10 == 7)
        sayac++;

    while(sayi/10!=0){
        sayi = sayi /10;
        if(sayi % 10 == 7)
            sayac++;
    }

    printf("\nGirdiginiz sayida %d tane 7 sayisi vardir.", sayac);
    getch();
    return 0;
}
