#include <stdio.h>
#include <stdlib.h>
#include<conio.h>


int recursion(int a){
	
	if(a!=0){
		return a+recursion(a-1);
	}
	else
	    return a;
	
}



int main() {
	int toplam,a;
	printf("bir sayi giriniz.");
	scanf("%d",&a);
	toplam=recursion(a);
	printf("%d",toplam);
	
	
	
	
	
	return 0;
}
