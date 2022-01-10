//SIMGE SEVINCER 2003022015...SAYIYI TERSTTEN YAZDIRAN C PROGRAMI...

#include <stdio.h>
#include <stdlib.h>

terssayi(int x){
	int i,a;
	for(i=0;x>0;i++){
		a=x%10;
		printf("%d",a);
		x/=10;
	}
}

int main() {
	
	int x;
	printf("tersten yazdirmak istediginiz sayiyi giriniz.");
	scanf("%d",&x);
	terssayi(x);
	
	return 0;
}
