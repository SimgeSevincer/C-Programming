//Simge Sevincer 2003022015.. Klavyeden girilen sayiyi ters yazdiran fonksiyon c++ programi..
#include <iostream>
using namespace std;

int SayiTersi(int a){
	int sonuc=0;
	int b;
    while(1)
    {
    	if(a==0)
    	{
    		break;
		}
		b=a%10;
		sonuc=sonuc*10+b;
		a=a/10;
	}
	return sonuc;
}

int main() {
	
	cout<<"Bir a sayisi giriniz."<<endl;
	int a;
	cin>>a;
	
	cout<<"Sayinin tersi="<<SayiTersi(a)<<endl;
	
	
	return 0;
}
