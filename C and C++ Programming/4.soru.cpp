#include <iostream>
#include <string>
using namespace std;

int main(){
	
	char kelime[100];
	cout<<"kelimeyi giriniz."<<endl;
	cin>>kelime;
	int a=0;
	while(kelime[a])
	{
		int x=kelime[a];
		
	
	    if(x>96 && x<123)
     	{
		kelime[a]-=32;
		cout<<kelime[a];
		
		
     	}
    a=a+1;
    while(kelime[a]){
	
	
	cout<<kelime[a];
	a++;
	
	}
	
	
	}
	
	
	
	
	
	
	


    return 0;

}
