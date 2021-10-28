//Simge Sevincer 2003022015...Isim alýp isimleri analiz eden c++ programi...
#include <iostream>
#include <string>
using namespace std;

int main() {
	string ali;
	string isim;
	int sayac1=0;
	int sayac2=0;
	int sayac3=0;
	
	cout<<"10 kisinin ismini giriniz."<<endl;
	
	for(int x=1;x<11;x++)
	{
	   getline(cin,isim);
	   cout<<x<<". isim="<<isim<<endl;
	   
	   int a=isim.length();
	  
	   
	   if(isim[a-1]=='k'){
		sayac3=sayac3+1;
   	   }
   	   
	   if(a==6){
		sayac2++;
	   }
	   
	   if(isim=="ali"){
		sayac1=sayac1+1;
	   }
    }
	
	cout<<"Ismi ali olan kisi sayisi="<<sayac1<<endl;
	cout<<"Isim uzunlugu 6 olan kisi sayisi="<<sayac2<<endl;
	cout<<"Ismi -k- ile biten kisi sayisi="<<sayac3<<endl;
	
	
	return 0;
}
