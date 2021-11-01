#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int yas;
	int durum;
	printf("ogrenci misiniz, evet icin 1 veya hayir için 0 giriniz.");
	scanf("%f",&durum);
	printf("yasinizi giriniz.");
	scanf("%d",&yas);
	if(durum==1){
		if(yas<=30){
			printf("2.5 tl");
			
		}
		
		if(yas>30){
			printf("2.75tl");
		}
	}
	
	if(yas>=60){
		printf("ucretsiz");
	}
	if(durum==0&&yas<60){
		printf("normal tarife");
	}
	
	return 0;
}
