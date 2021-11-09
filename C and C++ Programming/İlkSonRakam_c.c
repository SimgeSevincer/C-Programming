//SÝMGE SEVÝNCER 2003022015....ILK VE SON BASAMAGI YAZDIRAN C PROGRAMÝ....

#include <stdio.h>
#include <math.h>
int main() {
	int ilkBasamak,sayi1,sayi2,sonBasamak,i,a;
	
	printf("Ilk ve son basamagindaki rakami ogrenmek istedginiz sayiyi yaziniz.\n");
	scanf("%d",&sayi1);
	
	
	printf("Ilk ve son basamagindaki rakami ogrenmek istedginiz sayiyi tekrar yaziniz.\n");
	scanf("%d",&sayi2);
	
	
	sonBasamak=sayi1%10;
	
	for(i=0; 0<sayi2; i++) 
	{
	 sayi2/=10;  
	 
	}
	
	a=pow(10,(i-1));
	
	ilkBasamak=sayi1/a;
	
	printf("Ilk Basamak=%d Son Basamak=%d",ilkBasamak,sonBasamak);
	
	
	
	
	return 0;
}
