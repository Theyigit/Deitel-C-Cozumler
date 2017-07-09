#include <stdio.h>
#include <conio.h>

int main()
{
    int x;

    for(x=1;x<=6;x++)
        printf(" %d,", x);
        printf(" 7");
        printf("\n");

    for(x=3;x<=18;x+=5)
        printf(" %d,", x);
        printf(" 23");
        printf("\n");

    for(x=20;x>=-4;x-=6)
        printf(" %d,", x);
        printf(" -10");
        printf("\n");

    for(x=19;x<=43;x+=8)
        printf(" %d,", x);
        printf(" 51");
        printf("\n");

    getch();
    return 0;
}
