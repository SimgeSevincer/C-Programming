//2003022015 Simge Sevincer..Klavyeden girilen A ve B dizilerinin toplami olan C dizisini yazdiran c++ programi
#include <iostream>
using namespace std;

int main() {
	
	int A[5];
	int B[5];
	int C[5];
	int i=0;
	for(int i=0;i<5;i++)
	{
		cout<<"A dizisinin "<<i<<". elemanini giriniz."<<endl;
		cin>>A[i];
		cout<<"B dizisinin "<<i<<". elemanini giriniz"<<endl;
		cin>>B[i];
	}
	
    C[0]=A[0]+B[0];
    C[1]=A[1]+B[1];
	C[2]=A[2]+B[2];
	C[3]=A[3]+B[3];
	C[4]=A[4]+B[4];
	
	cout<<"C dizisinin elemanlari:"<<endl;
	cout<<C[0]<<endl;
	cout<<C[1]<<endl;
	cout<<C[2]<<endl;
	cout<<C[3]<<endl;
	cout<<C[4]<<endl;
	
	
	return 0;
}
