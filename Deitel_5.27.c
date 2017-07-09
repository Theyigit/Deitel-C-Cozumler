/* 1-1000 arasindaki asal sayilari bulan programi yazilmasi istendi. // YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>

int asal(int a);
int main()
{
    int x;

    printf("1-1000 arasindaki asal sayilar: \n\n");

    for(x=2;x<=1000;x++){
            if(asal(x)==0)
                printf("");
            else
                printf("%d\n", x);
    }

    getch();
    return 0;
}

int asal(int a){
    int c,d=1;
        for(c=2;c<a;c++){
            if(a%c==0)
                d=0;

        }
        if(d==0)
            return 0;
        else
            return 1;
}
