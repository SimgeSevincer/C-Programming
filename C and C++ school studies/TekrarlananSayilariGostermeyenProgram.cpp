//Simge Sevincer 2003022015... Klavyeden girilen dizi elemanlarindan tekrarlanan sayilari gostermeyen c++ programi
#include <iostream>
using namespace std;


int main() {
	
	int A[10];
	
	cout<<"A dizisinin "<<0<<". elemanini giriniz."<<endl;
    cin>>A[0];
    
    
    
    cout<<"A dizisinin "<<1<<". elemanini giriniz."<<endl;
    cin>>A[1];
    while(A[1]==A[0])
    {
    		cout<<"A dizisinin "<<1<<". elemanini tekrar giriniz."<<endl;
            cin>>A[1];
	}
	
	
	
    cout<<"A dizisinin "<<2<<". elemanini giriniz."<<endl;
    cin>>A[2];
    while(A[1]==A[2] || A[0]==A[2])
    {
    		cout<<"A dizisinin "<<2<<". elemanini tekrar giriniz."<<endl;
            cin>>A[2];
	}
	
	
	
	cout<<"A dizisinin "<<3<<". elemanini giriniz."<<endl;
    cin>>A[3];
    while(A[1]==A[3] || A[0]==A[3] || A[2]==A[3])
    {
    		cout<<"A dizisinin "<<3<<". elemanini tekrar giriniz."<<endl;
            cin>>A[3];
	}
	
	
	
	 cout<<"A dizisinin "<<4<<". elemanini giriniz."<<endl;
    cin>>A[4];
    while(A[1]==A[4] || A[0]==A[4] || A[2]==A[4] || A[3]==A[4])
    {
    		cout<<"A dizisinin "<<4<<". elemanini tekrar giriniz."<<endl;
            cin>>A[4];
	}
	
	
	
	cout<<"A dizisinin "<<5<<". elemanini giriniz."<<endl;
    cin>>A[5];
    while(A[1]==A[5] || A[0]==A[5] || A[2]==A[5] || A[3]==A[5] || A[4]==A[5])
    {
    		cout<<"A dizisinin "<<5<<". elemanini tekrar giriniz."<<endl;
            cin>>A[5];
	}
	
	
	
	 cout<<"A dizisinin "<<6<<". elemanini giriniz."<<endl;
    cin>>A[6];
    while(A[1]==A[6] || A[0]==A[6] || A[2]==A[6] || A[3]==A[6] || A[4]==A[6] || A[5]==A[6] )
    {
    		cout<<"A dizisinin "<<6<<". elemanini tekrar giriniz."<<endl;
            cin>>A[6];
	}
	
	
	
	cout<<"A dizisinin "<<7<<". elemanini giriniz."<<endl;
    cin>>A[7];
    while(A[1]==A[7] || A[0]==A[7] || A[2]==A[7] || A[3]==A[7] || A[4]==A[7] || A[5]==A[7] || A[6]==A[7])
    {
    		cout<<"A dizisinin "<<7<<". elemanini tekrar giriniz."<<endl;
            cin>>A[7];
	}
	
	
	
    cout<<"A dizisinin "<<8<<". elemanini giriniz."<<endl;
    cin>>A[8];
    while(A[1]==A[8] || A[0]==A[8] || A[2]==A[8] || A[3]==A[8] || A[4]==A[8] || A[5]==A[8]  || A[6]==A[8]  || A[7]==A[8])
    { 
    		cout<<"A dizisinin "<<8<<". elemanini tekrar giriniz."<<endl;
            cin>>A[8];
	}
	
	
	
	cout<<"A dizisinin "<<9<<". elemanini giriniz."<<endl;
    cin>>A[9];
    while(A[1]==A[9] || A[0]==A[9] || A[2]==A[9] || A[3]==A[9] || A[4]==A[9] || A[5]==A[9] || A[6]==A[9] || A[7]==A[9]  || A[8]==A[9])
    {
    		cout<<"A dizisinin "<<9<<". elemanini tekrar giriniz."<<endl;
            cin>>A[9];
	}
	
	
	
	cout<<"A dizisinin elemanlari="<<endl;
	cout<<A[0]<<","<<A[1]<<","<<A[2]<<","<<A[3]<<","<<A[4]<<"."<<A[5]<<","<<A[6]<<","<<A[7]<<","<<A[8]<<","<<A[9]<<endl;	
	

	
	return 0;
}
