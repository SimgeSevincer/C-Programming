#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char x;
	printf("bir karakter giriniz.");
	scanf("%c",&x);
	
	if(x>='a'&&x<='z'){
		printf("girdiginiz karakter alfabenin icindedir.");
		
	}
	else if(x>='A'&& x<='Z'){
		printf("girdiginiz karakter alfabenin icindedir.");
	}
	else{
		printf("girdiginiz karakter alfabenin iCinden degildir.");
	}
	
	
	
	
	
	return 0;
}
