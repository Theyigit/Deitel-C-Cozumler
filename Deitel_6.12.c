/* a) 10 elemani olan sayaclar dizisinin ilk degerini 0 atayin
   b) bonus tamsayi dizisinin her elemanina 1 ekleyin
   c) float tipindeki aylikSicakliklar dizisine klavyeden 12 tamsayi girin
   d) enIyiSkorlar dizisinin 5 degerini ekrana sutun halinde yazdirin // YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>

int main()
{
    int sayaclar[9]={},bonus[6]={1,2,3,4,5,6};
    int x, enIyiSkorlar[7]={10,2,30,1,4};
    float aylikSicakliklar[11]={};
    printf("a)\n\n   ");

    sayaclar[0]=0;
    printf("%d", sayaclar[0]);

    printf("\n\nb)\n\n   ");

    printf("Bonus dizisinin ilk elemanlari:");
    for(x=0;x<6;x++)
        printf(" %d ", bonus[x]);

    printf("\n\n");

    printf("   Bonus dizisine +1 eklenmis elemanlar:");
    for(x=0;x<6;x++)
        printf(" %d ", bonus[x]+1);

    printf("\n\nc)\n\n   ");

    for(x=0;x<13;x++){
        printf("%d. elemani girin: ", x);
        scanf("%f", &aylikSicakliklar[x]);
        printf("\n   ");
    }

    printf("\nd)\n\n   ");

        printf("Dizinin ilk 5 elemani: ");
        for(x=0;x<5;x++){
            printf("%d", enIyiSkorlar[x]);

            printf("\n                          "); }






    getch();
    return 0;
}
