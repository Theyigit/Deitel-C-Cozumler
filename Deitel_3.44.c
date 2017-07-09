#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a, b ,c;

    printf("Ucgenin ilk kenarini giriniz   : ");
    scanf("%f", &a);
    printf("\nUcgenin ikinci kenarini giriniz: ");
    scanf("%f", &b);
    printf("\nUcgenin ucuncu kenarini giriniz: ");
    scanf("%f", &c);

    if( fabs(b-c)< a && a< b+c)
        printf("\nBu uc kenarla ucgen olusturulabilir.\n\n");
    else
        printf("\nBu uc kenarla ucgen olusturulamaz.");

    getch();
    return 0;
}
