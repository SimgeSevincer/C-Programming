//S�MGE SEV�NCER 2003022015 YA� HESAPLAYAN C PROGRAMI

#include <stdio.h>
#include<time.h>

int main() {
	
	//Oldu�umuz y�la g�re ya� hesaplayan c program�
	int yas,dgyili;
	
     time_t seconds=time(NULL);
     struct tm* current_time=localtime(&seconds); 
     
     printf("Yasinizi hesaplamak icin dogum yilinizi giriniz.\n");
     scanf("%d",&dgyili);
     
     yas=(current_time->tm_year + 1900)-dgyili;
     printf("Suanki yasiniz:%d\n",yas);
	
	
	//Klavyeden ya��n� giren kullan�c�n�n ya��n� ekrana yazd�ran c program�
	int yas1;
	printf("Yasinizi giriniz.\n");
	scanf("%d",&yas1);
	printf("Suanki yasiniz:%d",yas1);
	
	return 0;
}
