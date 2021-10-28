//Simge Sevincer 2003022015...Yil sonu notlari girilen ogrencinin dersten gectigini veya kaldigini gosteren c++ programi 
#include <iostream>
using namespace std;

int main() {
	int N;
	int toplam=0;
	int ort;
	int i=0;
	cout<<"Sinifiniz kac kisilik?"<<endl;
	cin>>N;
	int A[N];
	
	for(i=0;i<N;i++)
	{
		cout<<i+1<<".notu giriniz."<<endl;
		cin>>A[i];
		toplam=toplam+A[i];
	}
	
	ort=toplam/N;
	
	for(i=0;i<N;i++)
	{
		if(ort<A[i])
		{
			cout<<i+1<<".kisi sinavdan gecti."<<endl;
		}
		
		else
		{
			cout<<i+1<<".kisi sinavdan kaldi."<<endl;
	    }
	}
	
	
	
	
	
	return 0;
}

