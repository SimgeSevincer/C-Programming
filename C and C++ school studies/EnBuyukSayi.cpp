//2003022015 Simge Sevincer
//en buyuk sayiyi bulan c++ programi

#include <iostream>
using namespace std;

int main()
{
	float a;
	float b;
	float c;
	
	cout<<"Kesirli a sayisi giriniz."<<endl;
	cin>>a;
	cout<<"Kesirli b sayisi giriniz."<<endl;
	cin>>b;
	cout<<"Kesirli c sayisi giriniz."<<endl;
	cin>>c;
	
	
	if (a<b && c<b)
	  cout<<"En buyuk sayi b="<<b<<endl;
    if (b<c && a<c)  
	  cout<<"en buyuk sayi c="<<c<<endl;
	if (c<a && b<a)
	  cout<<"en buyuk sayi a="<<a<<endl;  
	
	
	
	return 0;
}
