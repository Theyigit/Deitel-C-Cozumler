/* Hipotenesun saglanip saglanilmadigi istendi. Kenarlarindan hiçbirinin degeri 500'den
büyük olmayan tüm dik üçgenleri bulup tüm olasiliklarin ekrana basilmasi istendi.
//YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int x, y, z;

    for(x=1;x<=500;x++){
        for(y=1;y<=500;y++){
            for(z=1;z<=500;z++){
                if(pow(x,2) == pow(y,2)+pow(z,2))
                    printf("%d %d %d\n", y,z,x);
            }
        }
    }
    getch();
    return 0;
}
