//S�MGE SEV�NCER 2003022015 OHM KANUNU C PROGRAMI

#include <stdio.h>

int main() {
	//V=�*R
	float akim,gerilim,direnc;
	printf("Gerilimi hesaplamak icin akimi ve direnci sirasiyla giriniz.\n");
	scanf("%f %f",&akim,&direnc);
	gerilim=akim*direnc;
	printf("%f",gerilim);	
	
	
	return 0;
}
