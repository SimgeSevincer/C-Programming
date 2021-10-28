//Simge Sevincer 2003022015..Dairenin alanini ve cevresini hesaplayan fonksiyon c++ programi..
#include <iostream>
using namespace std;

float daireAlan(float r){
		float sonuc1;
		float pi=3.14;
		sonuc1=pi*r*r;
		return sonuc1;
	}
	
	float daireCevre(float r){
		float sonuc2;
		float pi=3.14;
		sonuc2=2*pi*r;
		return sonuc2;
	}
	

int main() {
	
	cout<<"Dairenin yaricapini giriniz."<<endl;
	int r;
	cin>>r;

	cout<<"dairenin alanini hesaplamak icin 1e, cevresini hesaplamak icin 2e basiniz."<<endl;
	int a;
	cin>>a;
	
	if(a==1)
	{
		cout<<daireAlan(r);
	}
	
	if(a==2)
	{
		cout<<daireCevre(r);
	}
	
	return 0;
}
