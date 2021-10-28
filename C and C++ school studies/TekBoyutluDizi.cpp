//Simge Sevincer 2003022015..Sayilari yaziyla yazdiran tek boyutlu dizi c++ programi..
#include <iostream>
using namespace std;

int main() {
	
	string A[19]={"eksi dokuz","eksi sekiz","eksi yedi","eksi altý","eksi bes","eksi dort","eksi uc","eksi iki","eksi bir","sifir","bir","iki","üç","dort","bes","alti","yedi","sekiz","dokuz"};

	cout<<"-9 ve 9 sayilari dahil arasindan bir rakam seciniz."<<endl;
	int a;
	cin>>a;
	
	cout<<A[a+9];
	
	return 0;
}
