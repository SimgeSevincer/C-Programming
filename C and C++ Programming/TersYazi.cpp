//Simge Sevincer 2003022015...Girilen metni tersten yazdiran c++ programi...
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string kelime;
	cout<<"Tersten yazdirmak istediginiz metni yaziniz."<<endl;
	getline(cin,kelime);
	for(int a=kelime.length()-1;a>=0;a--)
	{
		cout<<kelime[a];
	}
	
	
	return 0;
}
