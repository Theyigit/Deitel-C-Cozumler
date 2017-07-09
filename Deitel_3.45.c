#include <stdio.h>
#include <conio.h>

int main()
{
    float a, b, c;

    printf("90 derecenin karsisindaki kenari girin :");
    scanf("%f", &a);
    printf("\nIkinci kenari girin                    :");
    scanf("%f", &b);
    printf("\nUcuncu kenari girin                    :");
    scanf("%f", &c);

    if(pow(a,2)== pow(b,2) + pow(c,2))
        printf("\nDik ucgen olusturulabilir.");
    else
        printf("\nDik ucgen olusturulamaz.");

    getch();
    return 0;
}
