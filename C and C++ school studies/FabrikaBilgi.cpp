//Simge Sevincer 2003022015...Fabrika iscilerinin bilgilerini dosyaya yazd�ran c++ programi...
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main() {
	setlocale(LC_ALL,"Turkish");
 	ofstream dosya;
 	dosya.open("bilgiler.txt");
  	int tc, maas;
  	string ad,soyad;
  	cout<<"l�tfen 10 ki�inin tc ad soyad ve maa� bilgilerini giriniz."<<endl;
  	dosya<<setw(5)<<"TC"<<setw(10)<<"ad"<<setw(15)<<"soyad"<<setw(20)<<"maa�"<<endl;
  	for(int i=1;i<=10;i++){
  		cin>>tc>>ad>>soyad>>maas;
  		dosya<<setw(5)<<tc<<setw(10)<<ad<<setw(15)<<soyad<<setw(20)<<maas<<endl;
	  }
	dosya.close();

	
	
	
	return 0;
}
