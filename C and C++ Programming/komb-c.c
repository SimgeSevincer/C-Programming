#include <stdio.h>
#include <stdlib.h>


int main() {
	
	
	printf("iki sayi giriniz.\n");
	int sayi1,sayi2,islem1=1,islem2=1,islem3=1,a,komb;
	scanf("%d",&sayi1);
	scanf("%d",&sayi2);
	if(sayi1>sayi2){
		a=sayi1-sayi2;
		for(;a>0;a--){
			islem3*=a;
		}
	}
	else{
		a=sayi2-sayi1;
		for(;a>0;a--){
		
		     islem3*=a;}
	}
	for(;sayi1>0;sayi1--){
		islem1*=sayi1;
	
	}
	printf("%d\n",islem1);
	for(;sayi2>0;sayi2--){
		islem2*=sayi2;
	}
	printf("%d\n",islem2);
	
	printf("%d\n",islem3);
komb=islem1/(islem3*islem2);
printf("kombinasyonun sonucu=%d",komb);

	
	
	
	
	
	return 0;
}
