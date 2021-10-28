//Simge Sevincer 2003022015
//not ortalamasý hesaplayan c++ programý

#include <iostream>
using namespace std;


int main() {
	float not1;
	float not2;
    float not3;
    float not4;
    float not5;
    float not6;
    float notOrtalamasi;
	cout<<"1.ders notunuzu giriniz."<<endl;
	cin>>not1;
	cout<<"2.ders notunuzu giriniz."<<endl;
	cin>>not2;
	cout<<"3.ders notunuzu giriniz."<<endl;
	cin>>not3;
	cout<<"4.ders notunuzu giriniz."<<endl;
	cin>>not4;
	cout<<"5.ders notunuzu giriniz."<<endl;
	cin>>not5;
	cout<<"6.ders notunuzu giriniz."<<endl;
	cin>>not6;
	
	
	notOrtalamasi=(not1+not2+not3+not4+not5+not6)/6;
	
	cout<<"notOrtalamasi=(not1+not2+not3+not4+not5+not6)/6;"<<endl;
	cout<<"notOrtalamasi="<<notOrtalamasi<<endl;
	

	
	
	
	return 0;
}
