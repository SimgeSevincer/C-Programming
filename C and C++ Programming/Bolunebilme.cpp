//Simge Sevincer 2003022015 5.soru
#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;
	cout<<"Bir sayi giriniz."<<endl;
	cin>>x;
	cout<<"Sayi kaca kadar gitmesini istiyorsaniz yaziniz."<<endl;
	cin>>y;
	for(;x<y;x++)
	{
		if(x%5==0 || x%3==0)
		{
			cout<<x<<endl;
		}
		
	}
	
	return 0;
	
}
