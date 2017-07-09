/*Bir tamsayi alan ve sayiyi tersten yazan bir program istendi. //YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>

int ters(int x);

int main()
{
    int a;

    printf("Bir tamsayi giriniz: ");
    scanf("%d", &a);
    printf("Sayinin tersi: %d", ters(a));

    getch();
    return 0;
}

int ters(int x){

    int  d=0;

   while(x>0)
      {
	 d = (d * 10) + (x % 10);
	 x = x / 10;
      }
        return d;
}
