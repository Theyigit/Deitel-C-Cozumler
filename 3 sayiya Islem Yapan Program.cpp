#include <stdio.h>
#include <conio.h>

 int main ()
 {
    int x, y, z, toplam, ortalama, carpma;
    
    printf("Luften 3 tane tamsayi giriniz!\n");
    scanf("%d%d%d", &x, &y, &z);
    
    printf("Girdiginiz sayilar \t%d\t%d\t%d\n", x, y, z);
    
    toplam = x + y + z;
       printf("Toplam %d dir\n", toplam);
       
    ortalama = (x + y + z) / 3;
	   printf("Bu sayilarin ortalamasi %d dir\n", ortalama);
	   
	carpma = x * y * z;
	   printf("Sayilarin carpimi %d dir\n", carpma);
	   
	if(x > y&z)
	   printf("En buyuk sayi %d dir\n", x);
	   
	if(y > x&z)
	   printf("En buyuk sayi %d dir\n", y);
	   
    if(z > x&y)
	   printf("En buyuk sayi %d dir\n", z); 
	   
	if(z < x&y)
	   printf("En kucuk sayi %d dir\n", z);
	   
	if(y < x&z)
	   printf("En kucuk sayi %d dir\n", y);
	   
	if(x < z&y)
	   printf("En kucuk sayi %d dir\n", x);           
	   
	   getch();
	   return 0;
	   
 }
	     
	   
	      

