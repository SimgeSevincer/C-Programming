//S�MGE SEV�NCER 2003022015....N TANE SAY�Y� TOPLAN C PROGRAM�
#include <stdio.h>

int main() {
	
	printf("Toplamak istediginiz kac sayi varsa bu degeri yaziniz.\n");
	int sayi,i,a,toplam=0;
	
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	   scanf("%d",&sayi);
	   toplam=sayi+toplam;
	   
		
	}
	printf("Toplam=%d",toplam);
	
	
	
	return 0;
}
