#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main(){
	setlocale(LC_ALL,"Turkish");
	ofstream dosya;
	dosya.open("soru.txt");
	if(dosya.is_open()){
	float y;
 	for(int x=1;x<=20;x=x++){
 		y=pow(x,0.5);
 		dosya<<y<<endl;
	}
	}	
	dosya.close();
}
