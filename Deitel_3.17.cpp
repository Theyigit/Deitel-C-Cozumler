#include <stdio.h>
#include <conio.h>

int main()
{
	float  galon, ortalama, toplam_ortalama, toplam_galon, yol1;
	int  yol;
	
	printf("Kac galon benzin harcandi (Cikis icin -1) :  ");
	scanf("%f", &galon);
	toplam_galon = 0;
	yol1 = 0;
	while( galon !=-1) {
		
	
		printf("\nKac kilometre yol alindi: ");
		scanf("%d", &yol);
		ortalama = yol /galon;
		yol1 = yol1 + yol;
		printf("Kilometre / Galon : %f", ortalama);
		toplam_galon = toplam_galon + galon;
		toplam_ortalama = yol1 / toplam_galon;
	    printf("\nKac galon benzin harcandi (Cikis icin -1) :  ");
	    scanf("%f", &galon);
	}
	
	printf("\nToplam ortalama Kilometre/Galon: %f", toplam_ortalama);
	
	getch();
	return 0;
	
	}
