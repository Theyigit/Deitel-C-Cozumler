/* Iki boyutlu dizilerden ornek vermek icin bir program yazdirildi. Buna gore satilan 5 farkli
urunun ve 4 farkli saticinin ay sonundaki tablosunun olusturulmasi istendi. Hangi saticinin ne kadar
sattigi belirtilmedi icin rand fonksiyonundan yararlanildi. Komut satirinda yer yer kaymalar olabilir,
ama sonuclar dogru olarak donduruldu. // YAZAN: Yigit YILMAZ */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int x,y, dizi[5][6]={}, z=0, temsilci1=0, urun1=0,
    temsilci2=0, urun2=0, temsilci3=0, urun3=0, temsilci4=0, urun4=0,
    urun5=0;

    srand(time(NULL));

    z= 5 + rand()%10; //Sattigi urun degerlerine rasgele degerler atadik.

    for(x=1;x<=4;x++){
        for(y=1;y<=5;y++){
            dizi[x][y]=z;
        z= 5 + rand()%10;
        }
    }

    for(x=1;x<=4;x++)
        urun1+=dizi[x][1];

    for(x=1;x<=4;x++)
        urun2+=dizi[x][2];

    for(x=1;x<=4;x++)
        urun3+=dizi[x][3];

    for(x=1;x<=4;x++)
        urun4+=dizi[x][4];

    for(x=1;x<=4;x++)
        urun5+=dizi[x][5];


    printf("Satis Temsilcisi >>");

    for(x=1;x<=4;x++)
        printf("         %d",x);
    printf("     TOPLAM:\n\n");

    printf("   1. urun           ");
    for(x=1;x<=4;x++)
        printf("        %d", dizi[x][1]);
    printf("     %d", urun1);
    printf("\n");


    printf("   2. urun           ");
    for(x=1;x<=4;x++)
        printf("        %d", dizi[x][2]);
    printf("     %d", urun2);
    printf("\n");


    printf("   3. urun           ");
    for(x=1;x<=4;x++)
        printf("        %d", dizi[x][3]);
    printf("     %d", urun3);
    printf("\n");


    printf("   4. urun           ");
    for(x=1;x<=4;x++)
        printf("        %d", dizi[x][4]);
    printf("     %d", urun4);
    printf("\n");


    printf("   5. urun           ");
    for(x=1;x<=4;x++)
        printf("        %d", dizi[x][5]);
    printf("     %d", urun5);
    printf("\n");


    printf("\nTOPLAM:");

    for(x=1;x<=5;x++)
        temsilci1+=dizi[1][x];

    for(x=1;x<=5;x++)
        temsilci2+=dizi[2][x];

    for(x=1;x<=5;x++)
        temsilci3+=dizi[3][x];

    for(x=1;x<=5;x++)
        temsilci4+=dizi[4][x];



    printf("                     %d   ",temsilci1);
    printf("     %d   ",temsilci2);
    printf("     %d   ",temsilci3);
    printf("     %d   ",temsilci4);

    getch();
    return 0;
}
