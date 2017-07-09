/* Yuz kere yazi-tura atan program istendi. //YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int paraAt(void);
int main()
{
    srand(time(NULL));
    int x;

    for(x=1;x<=100;x++){
        if(paraAt()==1)
            printf("%d : tura\n", x);
        else
            printf("%d : yazi\n", x);
    }


    getch();
    return 0;
}
int paraAt(void){
    int y;

    y= 1 + rand()%3;

        if(y==1)
            return 1;
        else
            return 0;
}
