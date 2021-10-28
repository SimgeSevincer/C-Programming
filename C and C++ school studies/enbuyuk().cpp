//Simge Sevincer 2003022015..Klavyeden girilen 3 sayinin en buyugunu yazdýran fonksiyon c++ programi..
#include <iostream>
using namespace std;

float enbuyuk(float x,float y,float z){
	float sonuc;
	if(x<y && z<y)
	{
		sonuc=y;
	}
	
	if(y<x && z<x)
	{
		sonuc=x;
	}
	
	if(y<z && x<z)
	{
		sonuc=z;
	}
	return sonuc;
}

int main() {
	
	cout<<"Sirasiyla x,y,z sayilarini giriniz."<<endl;
	float x;
	cin>>x;
	float y;
	cin>>y;
	float z;
	cin>>z;
	
	cout<<"En buyuk sayi: "<<enbuyuk(x,y,z)<<endl;
	
	return 0;
}
