//Simge Sevincer 2003022015...Kurenin hacmini hesaplay�p dosyaya aktaran c++ programi...
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	setlocale(LC_ALL,"Turkish");
 	ofstream dosya;
 	dosya.open("sonuc.txt",ios::out);
 	if(dosya.fail()){
 		cout<<"ba�ar�s�z";
	 }
	 else{
	 	float hacim=0;
	 	const float pi=3.14;
	 	float dizi[10];	 
		dosya<<setw(5)<<"R"<<setw(10)<<"hacim"<<endl;
	 	for(int i=0;i<10;i++){
	 		cout<<i+1<<". k�renin yar��ap�n� giriniz."<<endl;
	 		cin>>dizi[i];
	 		hacim=pi*pow(dizi[i],3)*4/3;
	 		dosya<<setw(5)<<dizi[i]<<setw(10)<<hacim<<endl;
		 }
		 
	 }
	dosya.close();
}
