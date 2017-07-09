/* x ve y sayilarinin obebini yineleme fonksiyon kullanilarak bulunmasi istendi. //YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>

int obeb(int a, int b);

int main()
{
    int x,y;

    printf("Sayilari gir :\n");
    scanf("%d%d", &x,&y);
    printf("\n\n %10d ve %d sayilarinin obebi = %d", x,y,obeb(x,y));

    getch();
    return 0;
}

int obeb(int a, int b){

    if(b==0)
        return a;
    else
        return  obeb(b,a%b);

}
