#include <iostream>
using namespace std;

int main(){
	
	int a,b;
	int *p;
	p=&a;
	*p=10;
	p=&b;
    *p=20;
    cout<<b;
    cout<<a;
	
	
	
	
	
	
	return 0;
}
