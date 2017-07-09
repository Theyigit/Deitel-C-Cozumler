/* Bes tamsayi girisi yapan ve sayilari birer birer cift adi verilen bir fonksiyona gonderen program yazilacak.
Sayilar cift ise 1, tek ise 0 sonucu dondurulecek. //YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>


int cift(int a);
int main()
{
    int bir,iki,uc,dort,bes;

    printf("5 tamsayi girin :\n");
    scanf("%d%d%d%d%d", &bir,&iki,&uc,&dort,&bes);

    if(cift(bir))
        printf("\n%d cift sayidir\n", bir);
    else
        printf("\n%d tek  sayidir\n", bir);
    if(cift(iki))
        printf("%d cift sayidir\n", iki);
    else
        printf("%d tek  sayidir\n", iki);
    if(cift(uc))
        printf("%d cift sayidir\n", uc);
    else
        printf("%d tek  sayidir\n", uc);
    if(cift(dort))
        printf("%d cift sayidir\n", dort);
    else
        printf("%d tek  sayidir\n", dort);
    if(cift(bes))
        printf("%d cift sayidir\n", bes);
    else
        printf("%d tek  sayidir\n", bes);


    getch();
    return 0;
}

int cift(int a){

    return !(a%2);
}
