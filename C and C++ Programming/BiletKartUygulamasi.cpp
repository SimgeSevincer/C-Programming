//2003022015 Simge Sevincer
//bilet kart uygulamasý c++ programý

#include<iostream>
using namespace std;

int main()
{
    string cevap;
	int yas;
	cout<<"Yasinizi giriniz."<<endl;
	cin>>yas;
	cout<<"ogrenci iseniz -evet- yaziniz, degilseniz -hayir- yaziniz."<<endl;
	cin>>cevap;
	
	if(yas<=30 && cevap=="evet")
	   cout<<"Ucret 2.5TL"<<endl;
	   
    else if(yas>30 && cevap=="evet" && yas<60)
       cout<<"Ucret 2.75 TL"<<endl;
    
    else if(yas>=60)   
	   cout<<"Ucretsiz"<<endl;
	   
    else 
	   cout<<"Normal tarife ucret 3 TL"<<endl;
	
	
	
	
	return 0;
}
