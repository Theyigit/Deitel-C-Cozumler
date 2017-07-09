/* 2'den 30'a kadar olan çift tamsayýlarýn toplamýný hesaplayan ve ekrana yazdýran program istendi.
// Yazan : Yiðit YILMAZ */
#include <stdio.h>
#include <conio.h>

int main()
{
    int x, toplam=0;

    for(x=2;x<=30;x+=2){
        toplam+=x;
    }

    printf("2 ile 30 arasindaki cift sayilarin toplami %d dir.", toplam);

    getch();
    return 0;
}
