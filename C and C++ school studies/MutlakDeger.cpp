/*2003022015 Simge Sevincer
Bir sayinin mutlak degerini alan c++ programi*/

#include <iostream>
using namespace std;

int main ()
{
	float sayi;
	cout<<"Bir sayi giriniz."<<endl;
	cin>>sayi;
	
	if(sayi<0)
	{
		sayi=sayi*(-1);
		cout<<"|sayi|="<<sayi<<endl;
	}
	
	else
	{
		cout<<"Sayi pozitif, mutlak degeri kendisine esittir."<<endl;
	    cout<<"|sayi|="<<sayi<<endl;
	}
	
	
	
	
	return 0;
}
