//2003022015 Simge Sevincer
//iki programýn sonuçlarýnýn farklarýný yorumlama
#include<iostream>
using namespace std;

int main()
{
	
	//1.ornek
	int bolunen1=12, bolen1=8;
	float bolum1;
	bolum1=bolunen1/bolen1;
	cout<<bolum1<<endl;
	
	/*Bu programda bolum float tipinde olabilir fakat bolen ve bolunen int tipinde oldugundan bolunen ve bolenin bolumunden sonuc int tipinde cýkacaktýr. 
	int ve int degiskeninin bolumunun sonucu int olur.*/
	
	
	//2.ornek
	int bolunen2=12, bolen2=8;
	float bolum2;
	bolum2=(float)bolunen2/bolen2;
	cout<<bolum2<<endl;
	
	//Bu programda bolunen ve bolen int tipinde olmasýna ragmen degisken donusumu yaparak int olarak cýkacak sonucu float tipinde yazdýrmýs olduk.
	
	
	
	
	
	
	return 0;
}
