//S�MGE SEV�NCER 2003022015....BOLEN SAY�S�N� YAZDIRAN C PROGRAM�....
#include <stdio.h>

int main() {
	
	printf("Bolen sayisini yazdirmak istediginiz sayiyi giriniz.\n");
	int sayi,i,sayac=0;
	scanf("%d",&sayi);
	
	for(i=1;sayi>=i;i++){
		if(sayi%i==0){
			sayac++;
		}
	}
	printf("Bolenlerin Sayisi=%d",sayac);
	
	
	return 0;
}
