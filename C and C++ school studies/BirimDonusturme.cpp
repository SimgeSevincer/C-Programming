//Simge Sevincer 2003022015 1.soru
#include<iostream>
using namespace std;
int main()
{
    int x=0;
    int y=0;
	cout<<"Metre cinsinden deger giriniz"<<endl;
	cin>>x;
	cout<<"Girdiginiz degeri kmye donusturmek için 1e, cme donusturmak icin 2e, mmye donusturmek icin 3e basiniz."<<endl;
	cin>>y;
	
	switch(y)
	{
		case 1: x=x/1000; cout<<x<<endl;
			break;
		case 2:
			x=x*100;
			cout<<x<<endl;
			break;
		case 3:
		    x=x*1000;
			cout<<x<<endl;
			break;
		
	}
	
	
	
	
	
	return 0;
}

