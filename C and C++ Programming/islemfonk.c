//SIMGE SEVINCER 2003022015... ISLEM YAPAN FONKSIYON C PROGRAMI...

#include <stdio.h>
#include <stdlib.h>

int topla(int x,int y){
	return (x+y);
}

int cikartma(int x,int y){
	return (x-y);
}

int carpma(int x,int y){
	return (x*y);
}

int bolme(int x,int y){
	return (x/y);
}


int main() {
	
	int x,y,i;
	printf("x ve y sayilarini sirasiyla giriniz.\n");
	scanf("%d %d",&x,&y);
	printf("toplama:1,cikartma:2,carpma:3,bolme:4 secenklerinden birini secmek icin 1-4 arasi sayi giriniz.\n");
	scanf("%d",&i);
	switch(i){
		case 1:
			printf("toplam=%d",topla(x,y));
			break;
		case 2:
			printf("cikartma=%d",cikartma(x,y));
			break;
		case 3:
			printf("carpma=%d",carpma(x,y));
			break;
		case 4:
			printf("bolme=%d",bolme(x,y));
			break;
	     default:
	     	printf("yanlis deger girdiniz.");
	}
	
	
	return 0;
}
