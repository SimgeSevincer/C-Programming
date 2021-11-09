//SÝMGE SEVÝNCER 2003022015...HAFTANÝN GUNLERÝNÝ YAZDIRAN C PROGRAMÝ....
#include<stdio.h>
int main() {
	int gun;
	printf("Haftanin gunlerinden secim yapmak icin 1-7 arasindan sayi giriniz.\n");
	scanf("%d",&gun);
	switch(gun){
		case 1:
			printf("Pazartesi");
		break;
		
		case 2:
			printf("Sali");
		break;
		
		case 3:
			printf("Carsamba");
		break;
			
		case 4:
			printf("Persembe");
		break;
		
		case 5:
			printf("Cuma");
		break;
		
		case 6:
			printf("Cumartesi");
		break;
		
		case 7:
			printf("Pazar");
		break;
		
		default:printf("Yanlis deger girdiniz.");	
	}
	
	
	
	
	return 0;
}
