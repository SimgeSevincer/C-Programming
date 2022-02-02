#include <stdio.h>
#include <stdlib.h>

int silmek(int *dizi,int b){
	int i;
	int a=0;
	for(i=0;i<10;i++){
		if(b==*(dizi+i)){
			a++;
		}
	}
	int sayi=10-a;
	printf("kalan eleman sayisi=%d",sayi);
}

int main(int argc, char *argv[]) {
	
	int dizi[10]={1,2,2,3,4,4,5,5,6,6};
	int i=0;
	for(i=0;i<10;i++){
		printf("%d\n",dizi[i]);
	}
	printf("silmek istediginiz dizi elemanini giriniz.");
	int silme;
	scanf("%d",&silme);
	silmek(&dizi,silme);
	
	
	
	
	
	
	
	return 0;
}
