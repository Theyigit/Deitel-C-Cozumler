#include <stdio.h>
#include <conio.h>

int main()
{
    int n, carpim=1;

    printf("Sayi girin: ");
    scanf("%d", &n);

    while(n!=0){
        carpim = carpim *n;
        n--;
    }
    printf("\nSayinin faktoriyeli %d", carpim);

    getch();
    return 0;
}
