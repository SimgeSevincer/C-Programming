//Simge Sevincer 2003022015...Metin alip metin icinden sesli harfleri ��kar�p yazd�ran c++ programi...
#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish"); 
	char a;
	char e;
	char x='�';
	char i;
	char o;
	char y='�';
	char u;
	char z='�';
	string metin;
	cout<<"Sesli harflerini sildirmek istediginiz metni giriniz."<<endl;
	getline(cin,metin);
	int p =metin.length();
	for(int p=metin.length()-1;0<=p;p--)
	{
		if(metin[p]=='a'|| metin[p]=='e' || metin[p]=='�' || metin[p]=='i' || metin[p]=='o' || metin[p]=='�'|| metin[p]=='u' || metin[p]=='�')
	    {
	    	metin.erase(p,1);
		    
	    }
		
	}	
	
	cout<<metin<<endl;
	
	return 0;
}
