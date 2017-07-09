/* taban degerini donduren tamsayikuvveti(taban,us) adinda bir fonksiyon yazilmasi istendi. Matematik kutuphanesi
kullanilmadan yapilmalidir. Yazan: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>


int tamsayikuvveti(int taban, int us);
int main()
{
    int x, y;

    printf("Taban degerini giriniz :");
    scanf("%d", &x);
    printf("\nUs degerini giriniz  :");
    scanf("%d", &y);

    printf("\nx uzeri y=%d", tamsayikuvveti(x,y));

    getch();
    return 0;
}

int tamsayikuvveti(int taban, int us){

    int carpim=1;

    for(;us>=1;us--)
    carpim= carpim*taban;

    return carpim;
}

