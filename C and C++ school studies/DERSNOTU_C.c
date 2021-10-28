//SÝMGE SEVÝNCER 2003022015 NOT ORTALAMASI HESAPLAYAN C PROGRAMI

#include <stdio.h>

int main() {
	
	float not1,not2,not3,not4,not5,not6,ort;
	printf("Ortalamayi hesaplamak icin 6 dersten aldiginiz notlari sirasiyla giriniz.\n");
	scanf("%f %f %f %f %f %f",&not1,&not2,&not3,&not4,&not5,&not6);
	ort=(not1+not2+not3+not4+not5+not6)/6;
	printf("ort=%f",ort);
	
	
	
	return 0;
}
