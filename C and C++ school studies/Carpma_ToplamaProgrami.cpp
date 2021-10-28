//2003022015 Simge Sevincer
//carpma toplama yapan c++ programi

#include<iostream>
using namespace std;


int main()
{
	float a;
	float b;
	float c;
	cout<<"Bir a sayisi giriniz."<<endl;
	cin>>a;
	cout<<"Bir b sayisi giriniz."<<endl;
	cin>>b;
	
	if(a>b)
	{
		c=a*b;
		cout<<c<<endl;
	}
	
	else
	{
		c=a+b;
		cout<<c<<endl;
	}
	
	
	
	return 0;
}
