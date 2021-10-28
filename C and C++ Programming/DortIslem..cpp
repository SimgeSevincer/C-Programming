//Simge Sevincer 2003022015..Dort ýslem fonksiyonu c++ programi..
#include <iostream>
using namespace std;

float toplam(float sayi1,float sayi2){
	float sonuc1;
	sonuc1=sayi1+sayi2;
	return sonuc1;		
}

float cikarma(float sayi1,float sayi2){
	float sonuc2;
	sonuc2=sayi1-sayi2;
	return sonuc2;
}

float carpma(float sayi1,float sayi2){
   	float sonuc3;
	sonuc3=sayi1*sayi2;
	return sonuc3;
}

float bolme(float sayi1,float sayi2){
	float sonuc4;
	sonuc4=sayi1/sayi2;
	return sonuc4;
			
}
int main()
{
	
	cout<<"1. sayiyi giriniz:"<<endl;
	float sayi1;
	cin>>sayi1;
	
	cout<<"2. sayiyi giriniz:"<<endl;
	float sayi2;
	cin>>sayi2;
	
	cout<<"sayi1+sayi2="<<toplam(sayi1,sayi2)<<endl;
	cout<<"sayi1-sayi2="<<cikarma(sayi1,sayi2)<<endl;
	cout<<"sayi1*sayi2="<<carpma(sayi1,sayi2)<<endl;
	cout<<"sayi1/sayi2="<<bolme(sayi1,sayi2)<<endl;
	
	
	
	return 0;
}
