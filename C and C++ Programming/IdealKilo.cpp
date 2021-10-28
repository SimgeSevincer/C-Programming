//2003022015 Simge Sevincer
//ideal kilo c++ programi

#include <iostream>
using namespace std;

int main()
{
	float kilo;
	float boy;
	float BKI;
	cout<<"Kilonuzu giriniz."<<endl;
	cin>>kilo;
	cout<<"Boyunuzu metre cinsinden giriniz."<<endl;
	cin>>boy;
	
	BKI=kilo/(boy*boy);
	
	if(BKI<18.5)
	  cout<<"ZAYIF"<<endl;
	if(18.5<=BKI && BKI<=24.9)
	  cout<<"NORMAL"<<endl;
	if(25<=BKI && BKI<=29.9)  
	  cout<<"FAZLA KILOLU"<<endl;
	if(30<=BKI && BKI<=34.9)  
	  cout<<"1.DERECE OBEZ"<<endl;
	if(35<=BKI && BKI<=39.9)  
	  cout<<"2.DERECE OBEZ"<<endl;
	if(40<=BKI)  
	  cout<<"3.DERECE MORBID OBEZ"<<endl;
	
	
	
	
	return 0;
}


