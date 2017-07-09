#include <stdio.h>
#include <conio.h>

int main()
{
    float r, cap, cevre, alan, pi;
    pi = 3.14159;

    printf("Cemberin yaricapini girin: ");
    scanf("%f", &r);

    cap = 2 * r;
    cevre = 2 * pi * r;
    alan = pi * r * r;

    printf("\nCemberin capi    : %f\n", cap);
    printf("Cemberin cevresi : %f\n", cevre);
    printf("Cemberin alani   : %f\n", alan);

    getch();
    return 0;
}
