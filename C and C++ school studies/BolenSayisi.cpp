//2003022015 Simge Sevincer
//Alinan tam sayi degerinin tam bolen sayisini veren c++ programi
#include <iostream>
using namespace std;

int main()
{
	int i;
	int tamsayi;
	int sayac=0;
	cout<<"Bir tam sayi giriniz."<<endl;
	cin>>tamsayi;
	
	for(int i=1;i>0;i++)
	{
		if(tamsayi%i==0)
		{
			sayac+=1;
		}
	}
	
	// Tam bolen sayisi pozitif tam bolen sayisinin 2 katina esittir.
	cout<<"Toplam tam bolen sayisi="<<sayac*2<<endl;
	
	return 0;
}
