//Simge Sevincer 2003022015...Ucgen �eklinde yildiz motifini dosyaya yazd�ran c++ programi...
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL,"Turkish");
	ofstream dosya;
	dosya.open("y�ld�z.txt",ios::out);
	for(int x=1; x<10 ; x++){
	  dosya<<" ";
         for(int j=1;j<=x;j++)
         {
               dosya<<"*";
        }
      dosya<<"\n";
}

    dosya.close();


	}
	
	
	
	
	
	
	
	

