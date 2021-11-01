#include <iostream>
using namespace std;

int main() {
	
	cout<<"bes ogrencinin puanini giriniz."<<endl;
	
	for(int x=1;x<6;x++)
	{
		int a;
		cin>>a;
		a=a+10;
		if(a>100)
		{
			cout<<"100"<<endl;
		}
		else{
		
		cout<<x<<".ogrencinin puani"<<a<<endl;
		}
	}
	
	
	
	
	
	return 0;
}
