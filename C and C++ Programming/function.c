#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int function(int a,int b);



int main() {
	int a,b,toplam;
	printf("get two number");
	scanf("%d %d",&b,&a);
	toplam=function(a,b);
	printf("%d",toplam);
	
	
	
	
	
	return 0;
}

function(int a,int b){
	
	int toplam;
	toplam=a+b;
	
	return toplam;
}
