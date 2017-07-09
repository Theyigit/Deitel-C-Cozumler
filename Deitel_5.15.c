/* hipotenus isminde bir fonksiyon olusturulacak ve ucgenin dik acilarini hesaplayan program yazdirilacaktir. Ornek ucgenler
3-4-5 , 5-12-13 , 8-15-17 olarak belirtilmistir. YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>
#include <math.h>

double hipotenus(double y , double z);
int main()
{
    double bir=3.0, iki=4.0, uc=5.0, dort=12.0,
    bes=8.0 , alti=15.0,a,b,c;

    a = hipotenus(bir,iki);
    b = hipotenus(uc,dort);
    c = hipotenus(bes,alti);

    printf("%6s%10s%10s%11s\n\n", "Ucgen", "1.Kenar", "2.Kenar","Hipotenus");
    printf("%6s%10.1f%10.1f%10.1f\n", "1",bir,iki,a);
    printf("%6s%10.1f%10.1f%10.1f\n", "2",uc,dort,b);
    printf("%6s%10.1f%10.1f%10.1f\n", "3",bes,alti,c);

    getch();
    return 0;
}

double hipotenus(double y , double z){



    return sqrt(pow(y,2) + pow(z,2));


    }
