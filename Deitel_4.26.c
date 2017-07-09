/* pi sayýsýnýn sonsuz deðerinden faydalanýlarak ilk 5000 deðerini ekrana tablo yapýlmasý
istendi. NOT: Soruda pi'nin serisi yanlýþ verilmiþ dikkat edin!(10.basým)// YAZAN: Yiðit YILMAZ */
#include <stdio.h>
#include <conio.h>

int main()
{
    int x=1;
    double pi=0, ilk=1;

    for(x=1;x<=5000;x++){

        if(x%2!=0){
           pi= pi + (4/ilk);
           printf("%f\n", pi);
           }

        else{
           pi= pi -(4/ilk);
           printf("%f\n", pi);
        }
        ilk+=2;
}
    getch();
    return 0;
}
