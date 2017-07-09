#include <stdio.h>
#include <conio.h>

int main()
{
    int n=2, ikininKatlari=2;

    while(n!=-1){
        printf("%d", ikininKatlari);
        ikininKatlari= pow(2,n);
        n++;
    }

    getch();
    return 0;
}
