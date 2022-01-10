//SIMGE SEVINCER 2003022015...DAIRENIN ALANI VE CEVRESINI HESAPLAYAN C PROGRAMI

#include <stdio.h>
#include <stdlib.h>
#define Pi 3
cevre(int r){
	return (2*Pi*r);
}

alan(int r){
	return (Pi*r*r);
}

int main() {
	
	int r,i;
	printf("yaricapi giriniz.");
	scanf("%d",&r);
	printf("cevre:1,alan:2 için 1-2 arasi sayi giriniz.");
	scanf("%d",&i);
	switch(i){
		case 1:
			printf("cevre=%d",cevre(r));
			break;
		case 2:
			printf("alan=%d",alan(r));
			break;
		default:
			printf("yanlis deger girdiniz.");
	}
	return 0;
}
