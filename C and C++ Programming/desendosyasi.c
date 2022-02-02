#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *dosya=fopen("yildiz.txt","w");
	if(dosya==NULL){
		printf("dosya acma islemi basarisiz");
	}
	else{
		printf("dosya acma islemi basarili");
		int satir=7,i,j;
		for(i=1;i<=7;i++){
			for(j=i;j>=1;j--){
				fprintf(dosya,"%d",j);
			}
			fprintf(dosya,"\n");
		}
		fclose(dosya);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
