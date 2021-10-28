#include <iostream>
using namespace std;
int main(){
int i, a, b, c, sayac=0;
for(i=100;i<=999;i++) {
a = i/100;
b = (i%100)/10;
c = i%10;
if(a!=b && a!=c && b!=c) {
cout<<i<<endl;
sayac++;
}
}
cout<<"Toplam sayi"<<sayac;
}
