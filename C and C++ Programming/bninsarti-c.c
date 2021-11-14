#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() {
	
	printf("bir sayi giriniz.\n");
	int b;
	scanf("%d",&b);
	int a=1;
	int x;
	for(;a<101;a++){
		x=pow(a,3)-pow(a,2);
		if(x==b){
			printf("%d.sarti saglayan deger %d\n",a,a);
		}
		else{
			printf("%d.sarti saglayan deger yoktur.\n",a);
		}
	}
	
	
	
	return 0;
}
