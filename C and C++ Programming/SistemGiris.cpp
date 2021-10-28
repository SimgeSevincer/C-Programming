//Simge Sevincer 2003022015...Sistem girisi icin þifre isteyen c++ programý...
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string sifre;
	string admin;
	cout<<"Sayin kullanicimiz sistem sifrenizi giriniz."<<endl;
	cin>>sifre;
	while(sifre!="admin")
	{
		cout<<"Sifre hatali, tekrar kontrol ediniz"<<endl;
		cout<<"Sayin kullanicimiz sistem sifrenizi tekrar giriniz."<<endl;
	    cin>>sifre;
	}
	 if(sifre=="admin"){
	    	cout<<"Giris basarili"<<endl;
		}
	
	return 0;
}
