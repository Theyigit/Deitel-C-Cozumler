#include <stdio.h>
#include <stdlib.h>

int main()
{
    float calismaSaati, saatlikUcret, calisanMaasi, yeniSaat;

    printf("\nCalisma saatini girin:(Cikis icin -1):");
    scanf("%f", &calismaSaati);

    printf("\nCalisanin saatlik ucretini girin:");
    scanf("%f", &saatlikUcret);

    while(calismaSaati!=-1){


    if(calismaSaati<=40){
        calisanMaasi = calismaSaati*saatlikUcret;
        printf("\nCalisan maasi %f $", calisanMaasi);
    }

    if(calismaSaati>=40){
        yeniSaat = calismaSaati-40;
        calisanMaasi = yeniSaat*saatlikUcret;
        printf("\nCalisan maasi %f $", calisanMaasi);

         }
         printf("\nCalisma saatini girin:(Cikis icin -1):");
         scanf("%f", &calismaSaati);

}
    return 0;
}
