//S�MGE SEV�NCER 2003022015 D�V�Z HESAPLAYAN C PROGRAMI

#include <stdio.h>

int main() {
	
	float dolarkuru,tlmiktari,dolarmiktari;
	printf("TL miktarini hesaplamak icin dolar kuru ve dolar miktarini sirasi ile giriniz.\n");
	scanf("%f %f",&dolarkuru,&dolarmiktari);
	tlmiktari=dolarkuru*dolarmiktari;
	printf("tl=%f",tlmiktari);
	
	
	
	return 0;
}
