//S�MGE SEV�NCER 2003022015 ��GEN ALANI HESAPLAYAN C PROGRAMI

#include <stdio.h>

int main() {
	
	float kenar,yukseklik,alan;
	printf("Ucgen alanini hesaplamak icin kenar ve o kenara ait yukseklik degerlerini sirasiyla giriniz.\n");
	scanf("%f %f",&kenar,&yukseklik);
	alan=(kenar*yukseklik)/2;
	printf("%f",alan);
	
	
	
	
	return 0;
}
