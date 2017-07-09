#include <stdio.h>
#include <conio.h>

int main()
{
     int n=1;

    while(n<=3000000){

        if(n%1000000==0){
            printf("%d\t", n);}
        n++;

    }
    getch();
    return 0;
}
