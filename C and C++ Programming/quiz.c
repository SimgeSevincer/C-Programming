#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	
	printf("soru sayisini giriniz.");
	float n;
	scanf("%f",&n);
	printf("evine varmasi gereken süreyi dk cinsinden giriniz.");
	float k;
	scanf("%f",&k);
	float sinavsuresi=5*((n*(n+1))/2);
	float a=sinavsuresi+k;
	if(a<240){
		printf("eve erkenden ulastiniz.");
	}
	else{
		float i;
		float sonuc;
		for(i=1;i<n;i++){
			float b=(5*(i*(i+1))/2)+k;
			if(b<240){
				sonuc=i;
				
			}
			
	
	}
	printf("%f kadar soru çözerseniz eve yetisirsiniz.\n",sonuc);

}
	return 0;
}
