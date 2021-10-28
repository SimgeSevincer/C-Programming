//2003022015 Simge Sevincer
//n tane sayinin toplamini hesaplayan c++ programi
#include<iostream>
using namespace std;

int main()
{
	int i;
	float sayi;
	float toplam;
	for(int i=1;i<=10;i++)
	{
		cout<<i<<".sayiyi giriniz."<<endl;
		cin>>sayi;
		toplam=toplam+sayi;
	}
	
	cout<<"Toplam="<<toplam<<endl;
	
	
	return 0;
}
