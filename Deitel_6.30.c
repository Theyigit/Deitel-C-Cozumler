/* Eratosthenes elegi yöntemi ile 1000 degiskenli bir dizinin belirtecleri asal olanlarinin yazdirilmasi
istendi //YAZAN: Yigit YILMAZ */

#include <stdio.h>
#include <conio.h>

int main()
{

    int x, y, dizi[1000];

    for(x=1;x<=999;x++) // Ilk olarak butun degerlere 1 atadik.
        dizi[x]=1;

    for(x=2;x<=999;x++){
        for(y=x+1;y<=999;y++)
            if(y%x==0)  // Eger sayi daha kucuk bir bolunuyorsa 0 atadik.(4,6,8... gibi)
                dizi[y]=0;
    }

    for(x=2;x<=999;x++){
        if(dizi[x]==1)  //Degeri 1 olanlarin belirteclerini  yazdirdik.
            printf("%d\n",x);
    }


    getch();
    return 0;
}
