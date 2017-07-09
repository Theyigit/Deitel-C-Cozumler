#include <stdio.h>
#include <conio.h>

int main()
{
    int ilk_sayi, ikinci_sayi, ucuncu_sayi, dorduncu_sayi, besinci_sayi, sayi;

    printf("Sayi giriniz: ");
    scanf("%d", &sayi);

    besinci_sayi = sayi % 10;
    dorduncu_sayi = (sayi/10) % 10;
    ucuncu_sayi = (sayi/100) % 10;
    ikinci_sayi = (sayi/1000) % 10;
    ilk_sayi   = (sayi/10000) % 10;

    printf("\nBirler basamagi  : %d\n", besinci_sayi);
    printf("Onlar basamagi   : %d\n", dorduncu_sayi);
    printf("Yuzler basamagi  : %d\n", ucuncu_sayi);
    printf("Binler basamagi  : %d\n", ikinci_sayi);
    printf("Onbinler basamagi: %d\n\n", ilk_sayi);

    if(ilk_sayi==besinci_sayi && ikinci_sayi==ucuncu_sayi)
        printf("Girdiginiz sayi bir Palindrome sayidir!\n");
    else
        printf("Girdiginiz sayi Palindrome sayi degildir!\n");

    getch();
    return 0;
}
