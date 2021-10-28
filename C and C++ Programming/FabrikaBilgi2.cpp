//Simge Sevincer 2003022015...Fabrika iscilerinin bilg,lerini konsola yazdiran c++ programi...
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
	setlocale(LC_ALL,"Turkish");
 	fstream dosya;
 	dosya.open("bilgiler.txt",ios::in);
   	string isim;
   	while(!dosya.eof()){
   		getline(dosya,isim,',');
		   cout<<isim<<" ";
	   }
	dosya.close();
}
