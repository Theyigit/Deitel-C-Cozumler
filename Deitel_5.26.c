/* Eger bir sayinin kendisi haric butun carpanlarinin toplami kendisine esit ise mukemmel sayidir. 1-1000
arasindaki sayilari bulup ekrana yazan programi yapiniz. // YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>

int mukemmel(int sayi);
int main()
{
    int y;

    for(y=1;y<=1000;y++){
    if(y==mukemmel(y)){
        printf("%d :  Mukemmel bir sayidir!\n", y);
    }}

    getch();
    return 0;
}

int mukemmel(int sayi){

    int toplam=0,a;
    a=(sayi-1);
    for(;1<=a;a--){

        if(sayi%a==0){
            toplam+=a;
        }
}
return toplam;
}


