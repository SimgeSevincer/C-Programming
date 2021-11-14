#include <stdio.h>
#include <stdlib.h>


int main() {
	
	
	printf("bir sayi giriniz.");
	int x,toplam=0;
	scanf("%d",&x);
	
	while(x%2==0){
		toplam+=x;
		printf("bir sayi giriniz");
		scanf("%d",&x);
	}
	
	printf("cift sayilarin toplami=%d",toplam);
	
	
	
	
	return 0;
}
