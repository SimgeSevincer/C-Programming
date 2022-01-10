//SIMGE SEVINCER 2003022015...EN BUYUK SAYIYI BULAN C PROGRAMI...

#include <stdio.h>
#include <stdlib.h>

enbuyuk(int x,int y,int z){
	if(x>y&&x>z){
		return x;
	}
	if(y>x&&y>z){
		return y;
	}
	if(z>y&&z>x){
		return z;
	}
}

int main() {
	
	int x,y,z;
	printf("karsilastirmak istediginiz sayilari giriniz.");
	scanf("%d %d %d",&x,&y,&z);
	printf("en buyuk sayi=%d",enbuyuk(x,y,z));

	return 0;
}
