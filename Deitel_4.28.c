/* Bir sirket  mudurlerine(sabit haftalik ucret), vardiyali iscilerine(40 saat sabit sonra saatlik ucretin 1.5 katý),
komisyon iscilerine(sabit 250$ ve haftalik brut satisin %5.7si), parca iscilerine(urettigi her malzeme basina sabit ucret)
vermekte. Her calisan tipinin haftalik maasi istendi. Kac calisan oldugu girilmeyecek. // YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>

int main()
{
    int kod=1, saat;
    float mudur, vardiyaci, komisyoncu, parcaci, satis1,satis2,satis3,satis4;

    switch(kod){

        case 1:
            printf("Mudure haftalik odemenizi girin : ");
            scanf("%f", &mudur);

        case 2:
            printf("\nVardiya iscilerinizin saatlik maasini girin : ");
            scanf("%f", &vardiyaci);
            printf("\nVardiya iscilerinin haftalik calisma saatini girin : ");
            scanf("%d", &saat);
            if(saat<=40)
                satis1 = vardiyaci * saat;
            else
                satis1 = (40*vardiyaci) + (saat-40)*(vardiyaci*1.5);
        case 3:
            printf("\nHaftalik brut satis miktarini girin :  ");
            scanf("%f", &komisyoncu);
            satis2 = 250 + (komisyoncu*5.7)/100;

        case 4:
            printf("\nParca iscilerinin malzeme basina sabit ucretini giriniz : ");
            scanf("%f", &parcaci);
            printf("\nParca iscilerinin urettigi malzeme sayisini giriniz : ");
            scanf("%f", &satis3);
            satis4 = satis3 * parcaci; break;
}
    printf("\n\nMudure vereceginiz maas           : %.2f\n", mudur);
    printf("Vardiya iscisine vereceginiz maas : %.2f\n", satis1);
    printf("Komisyon iscisine vereceginiz maas: %.2f\n", satis2);
    printf("Parca iscisine vereceginiz maas   : %.2f\n", satis4);



    getch();
    return 0;
}
