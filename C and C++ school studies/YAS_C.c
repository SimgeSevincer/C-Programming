//SÝMGE SEVÝNCER 2003022015 YAÞ HESAPLAYAN C PROGRAMI

#include <stdio.h>
#include<time.h>

int main() {
	
	//Olduðumuz yýla göre yaþ hesaplayan c programý
	int yas,dgyili;
	
     time_t seconds=time(NULL);
     struct tm* current_time=localtime(&seconds); 
     
     printf("Yasinizi hesaplamak icin dogum yilinizi giriniz.\n");
     scanf("%d",&dgyili);
     
     yas=(current_time->tm_year + 1900)-dgyili;
     printf("Suanki yasiniz:%d\n",yas);
	
	
	//Klavyeden yaþýný giren kullanýcýnýn yaþýný ekrana yazdýran c programý
	int yas1;
	printf("Yasinizi giriniz.\n");
	scanf("%d",&yas1);
	printf("Suanki yasiniz:%d",yas1);
	
	return 0;
}
