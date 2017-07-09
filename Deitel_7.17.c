/* Bu ornekte klasik Tavsan ve Kaplumbaga yarisinin canlandirilmasi istenmistir.
   Klavyeden her 1 tusuna bastiginizda T(tavsan) ve K(kaplumbaga) ifadeleri farkli
   yerlere dogru gidiyorlar. Hayvanlar bazen ileri bazen geriye dogru gidebiliyorlar.
    //YAZAN: Yigit YILMAZ */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void kimKazandi(int,int);

int main()
{
    int i,T,K,v=0,w=0,c=1;
    char kare[70];

    srand(time(NULL));

    printf("\t\t\tCUVV!!!!!!\t\t\n\t\tISTE BASLADILAR!!!!!!\n");
    printf("\t(Bir sonraki hamle icin 1'e basin. 1'i ilk gecen kazanir.)\n\n");

    for(i=0;i<70;i++){
        kare[i]=' ';
    }



    while(c!=-1){
        T=1+rand()%10;
        K=1+rand()%10;

        //Kaplumbaga icin hareket noktasi:

        if(1<=K && K<=6){ //Eger K 1-6 arasi bir degerse 3 kare ilerlesin.

            kare[v]=' ';
            v=v+3;
            kare[v]='K';

        }

        else if(6<K && K<=7){

            kare[v]=' ';
            v=v-6;
            if(v<0)
                v=1;
            kare[v]='K';

        }

        else{

            kare[v]=' ';
            v=v+1;
            kare[v]='K';

        }
        //Tavsan icin hareket noktasi:

        if(1<=T && T<=2){
            kare[w]='T';
        }
        else if(2<T && T<=5){ //Eger T 2-5 arasi bir degerse 9 kare ilerlesin.

            kare[w]=' ';
            w=w+9;
            kare[w]='T';

        }
        else if(5<T && T<=7){

            kare[w]=' ';
            w=w-12;
            if(w<0)
                w=1;
            kare[w]='T';

        }
        else if(7<T && T<=8){

            kare[w]=' ';
            w=w+1;
            kare[w]='T';

        }
        else{

            kare[w]=' ';
            w=w-2;
            if(w<0)
                w=1;
            kare[w]='T';

        }
        // Eger K ve T ayni yerdeyse B yazdir.

        if(kare[v]==kare[w])
            kare[w]='B';


        for(i=0;i<51;i++) // Kare dizisinin tamamini yazdir.
            printf("%c", kare[i]);

        kimKazandi(v,w);


        scanf("%d", &c);


    }

    getch();
    return 0;
}

// 50. kareye ilk kim gelirse o kazanir.
void kimKazandi(int a, int b){

        if(a>=50)
            printf("\n\n\tKaplumbaga kazandi!!!!!");
        else if(b>=50)
            printf("\n\n\tTavsan kazandi!!!!!");
        else if(a && b>=50)
            printf("\n\n\tYaris berabere!!!!");

}
