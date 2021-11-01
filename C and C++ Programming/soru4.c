#include <stdio.h>
#include <stdlib.h>



int main() {
	float kilo,boy,BKI;
	printf("kilo(kg) ve boyunuzu(m) sirasiyle giriniz. ");
	scanf("%f %f",&kilo,&boy);
	BKI=kilo/(boy*boy);
	if(BKI<=18.5){
		printf("zayif");
	}
	if(BKI>18.5&&BKI<=24.9){
		printf("NORMAL");
	}
		if(BKI>25&&BKI<=29.9){
		printf("FAZLA KILOLU");
	}
		if(BKI>30&&BKI<=34.9){
		printf("1.DERECE OBEZ");
	}
		if(BKI>35&&BKI<=39.9){
		printf("2.DERECE OBEZ");
	}
		if(BKI>=40){
		printf("3.DERECE OBEZ");
	}
	
	
	
	return 0;
}
