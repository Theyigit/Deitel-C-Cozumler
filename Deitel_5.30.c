/* siniflandir isminde bir fonksiyon yazilacak ve ogrencinin notuna gore siniflandirma yapilacak. //YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>

int siniflandir(int x);

int main()
{
    int x;

    printf("Not ortalamanizi puan cinsinden girin: ");
    scanf("%d", &x);
    printf("Ortalamanizin 4luk sistemdeki karsiligi: %d", siniflandir(x));

    getch();
    return 0;
}
int siniflandir(int x){

    if(x>=90)
        return 4;
    else if(x>=80)
        return 3;
    else if(x>=70)
        return 2;
    else if(x>=60)
        return 1;
    else
        return 0;
}
