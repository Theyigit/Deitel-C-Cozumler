/* Iki tamsayinin ikincisinin, birincisinin tam kati olup olmadigini bulan fonksiyon yazilmalidir. Tam katiysa 1(dogru)
degilse 2(yanlis) dondurulecek. // YAZAN : Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>

int tamkat(int x, int y);
int main()
{
    int a,b;

    printf("Iki tamsayi giriniz :\n");
    scanf("%d%d", &a,&b);

    if(tamkat(a,b))
        printf("%d sayisi %d sayisina bolunur", a,b);
    else
        printf("%d sayisi %d sayisina bolunmez", a,b);


    getch();
    return 0;
}

int tamkat(int x, int y){
    return !(x%y);
}
