#include <stdio.h>
#include <stdlib.h>
int hesapla(int dizim,int puan){
	int i;
	int dizi[5];
		for(i=0;i<5;i++){
		scanf("%d",&dizi[i]);
		dizi[i]=dizi[i]+10;
		if(dizi[i]>100){
			dizi[i]=100;
		}
	}
	
	for(i=0;i<5;i++){
		printf("%d.ogrencinin notu=%d\n",i+1,dizi[i]);
	}
	
}

int main(int argc, char *argv[]) {
	
	int dizi[5];
	int puan;
	int dizim;
	printf("5 ogrencinin puanini sirasi ile giriniz.");
	hesapla(dizim,puan);
	
	
	return 0;
}
