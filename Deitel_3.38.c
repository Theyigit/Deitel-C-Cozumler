#include <stdio.h>
#include <conio.h>

int main()
{
    int n = 1;

    while(n<=100){
        if(n % 10!= 0)
            printf("*");
        else
            printf("*\n");
        n++;
    }


    getch();
    return 0;
}
