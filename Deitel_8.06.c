/* Enter'a basilincaya dek s[100] karakter dizisine metini girisi yapan
   daha sonra girilen metni sadece kucuk harf ve sadece buyuk harf seklinde
   ekrana yazdiran bir program istendi. // YAZAN: Yigit YILMAZ */

#include <stdio.h>
#include <conio.h>
#include <ctype.h> // islower, tolower gibi fonksiyonlar bu kutuphanededir.

int main()
{
    char s[100];
    int i;

    printf("Metin girisi yapiniz: ");
    gets(s);




    for(i=0; *s!='\0'; *s++)
    {
        if(islower(*s))
            toupper(*s);
    }
    printf("Metin buyuk harflerle: %s", s);


    getch();
    return 0;
}
