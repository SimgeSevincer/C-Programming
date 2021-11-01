#include <stdio.h>
#include <stdlib.h>

 

int main() {
	
	int x,y,z,a,b,c,d;
	printf("ucgenin kenarlarini tek tek giriniz.");
	scanf("%d %d %d",&x,&y,&z);
    if(x+y>z&&x+z>y&&y+z>x){
    	printf("ucgen kuralina uyar");
	}
	else{
		printf("ucgen kuralina uymaz");
	}
	
	
	
	
	
	return 0;
}
