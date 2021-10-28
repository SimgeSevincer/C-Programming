//2003022015 Simge Sevincer
//klavyeden girilen acinin sin ve cos degerlerini alan c++ programi

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x;
	cout<<"Bir x acisi giriniz."<<endl;
	cin>>x;
	
	cos(x);
    sin(x);
	
	cout<<"cos(x)="<<cos(x)<<endl;
	cout<<"sin(x)="<<sin(x)<<endl;
	
	
	
	return 0;
}
