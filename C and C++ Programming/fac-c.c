#include <stdio.h>
#include <stdlib.h>


int main() {
	
	printf("bir sayi giriniz.");
	int sayi,fac=1;
	scanf("%d",&sayi);
	for(;sayi>0;sayi--){
		fac=sayi*fac;
	}
	printf("fac=%d",fac);
	
	
	
	
	
	return 0;
}
