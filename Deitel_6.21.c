/* Deitel bizden havayollari rezerve sistemi yazmamizi istedi. //YAZAN: Yigit YILMAZ */
#include <stdio.h>
#include <conio.h>
#define BOYUT 10
int main()
{
   int koltuk[BOYUT]={0,0,0,0,0,0,0,0,0,0},x,y=1,z=6;

   while(1){


   printf("Sigara icilen bolum icin 1'e basin.\nSigara icilmeyen bolum icin 2'e basin.");
   scanf("%d", &x);

   if(x==1){
        koltuk[y]=1;
        y++;
   }
   else if(x==2){
        koltuk[z]=1;
        z++;
   }


   }

    getch();
    return 0;
}
