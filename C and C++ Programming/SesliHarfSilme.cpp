//Simge Sevincer 2003022015...Metin alip metin icinden sesli harfleri çýkarýp yazdýran c++ programi...
#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish"); 
	char a;
	char e;
	char x='ý';
	char i;
	char o;
	char y='ö';
	char u;
	char z='ü';
	string metin;
	cout<<"Sesli harflerini sildirmek istediginiz metni giriniz."<<endl;
	getline(cin,metin);
	int p =metin.length();
	for(int p=metin.length()-1;0<=p;p--)
	{
		if(metin[p]=='a'|| metin[p]=='e' || metin[p]=='ý' || metin[p]=='i' || metin[p]=='o' || metin[p]=='ö'|| metin[p]=='u' || metin[p]=='ü')
	    {
	    	metin.erase(p,1);
		    
	    }
		
	}	
	
	cout<<metin<<endl;
	
	return 0;
}
