//Simge Sevincer 2003022015... A dizisindeki en buyuk eleamani ve en kucuk elemani bulan c++ programi
#include <iostream>
using namespace std;

int main() {
	
	int A[]={51,12,18,33,19,20,37};
	int i=0;
    int max=A[0];
    int min=A[0];
    for (i=0;i<7;i++)
{
	if(max<A[i])
	{
		max=A[i];
	} 
	
	if(min>A[i])
	{
		min=A[i];
	}
}
 	
    cout << "En Buyuk Sayi= " << max<<endl;
	cout<<"En kucuk sayi= "<<min;
	
	
	
	
	return 0;
}
