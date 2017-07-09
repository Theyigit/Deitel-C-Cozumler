#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int sayi, yeni_sayi, toplam=0, us=1, birler_basamagi;

    printf("Ikilik sistemde bir sayi giriniz: ");
    scanf("%d", &sayi);

    birler_basamagi = sayi % 10;

    while((sayi/10)!=0){
        sayi = sayi / 10;
        yeni_sayi = sayi % 10;
        toplam = toplam +(yeni_sayi * pow(2,us));
        us++;
                        }
        toplam = toplam + (birler_basamagi * pow(2,0));

    printf("\nSayinin onluk tabandaki degeri %d dir.", toplam);

    getch();
    return 0;
}
