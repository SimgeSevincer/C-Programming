#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct topluluk {
	int bilgi;
	char mesaj[100];
	struct topluluk *arka;
	
}BLISTE;

BLISTE *ilk=NULL,*son=NULL;
BLISTE *ara(int);
BLISTE *sil(int);
BLISTE *okuKlavye();
int listele();
int ekle(BLISTE*);
void yazEkrana(BLISTE*);

int main(int argc, char *argv[]) {
	
	BLISTE *eklenecek,*ki;
	int bilgi,sonuc;
	char secim;
	while(1){
		puts("\n ekleme\n listeleme \n arama \n silme \n cikis \n seciminiz?");
		secim=getch();
		switch(secim){
			case 'E': 
			    eklenecek=okuKlavye();
			    if(eklenecek!=NULL){
			    	ekle(eklenecek);
				}
				else{
					puts("ekleme icin bellek dolu\n");
				}
				break;
				
			case 'A':
			    puts("Aranan:");
				scanf("%d",&bilgi);
				ki=ara(bilgi);
				if(ki==NULL){
					puts("Aranan bulunamadi");
		        }
		        else{
		        	yazEkrana(ki);
				}
				break;
				
			case 'S':
			    puts("Silinecek:");
				scanf("%d",&bilgi);
				ki=sil(bilgi);
				if(ki!=NULL){
					puts("silindi..");
				}	
				else{
					puts("silinmek istenen yok..");
				}
				break;
				
			case 'C':
				puts("hoscakal\n");
				exit(0);
				break;
				
			case 'L':
			    sonuc=listele();
				if(sonuc==-1){
					puts("bos liste");
				}	
			default:puts("yanlis secim\n");	
	}
	
}
	
	return 0;
}

int ekle(BLISTE *ki){
	if(ilk!=NULL){  //ilk elemean degilse
		son->arka=ki;
		son=ki;
	}
	else{//ilk elemansa 
		ilk=ki;
		son=ilk;
		ilk->arka=NULL;
	}
	return 0;
}

int listele(){
	int say=0;
	BLISTE *p;
	p=ilk;
	if(p==NULL){
		return -1;
	}
	while(p){
		yazEkrana(p);
		p=p->arka;
		say++;
	}
	printf("say=%d",say);
	return 0;
}

BLISTE *ara(int aranan){
	BLISTE *p;
	p=ilk;
	while(p){
		if(p->arka==aranan){
			return p;
		}
		p=p->arka;
	}
	return NULL;
}

BLISTE *sil(int silinecek){
	BLISTE *p,*bironceki;
	p =ilk;
	bironceki=NULL;
	while(p){
		if(silinecek==p->bilgi){
			break;
		}
		bironceki=p;
		p=p->arka;
	}
	
	if(p!=NULL){
		if(bironceki==NULL){
		  if(ilk==son){
		  	ilk=NULL;
		  	son=NULL;
		  }
		  else{
		  	ilk=ilk->arka;
		  }
		}
	
	
	   else{
		bironceki->arka=p->arka;       
		if(bironceki->arka==NULL){
			son=bironceki;
	} 
		free(p);
		return p;
		}}
	else{
			return NULL;
		}                                                                                                                              
	    


}

void yazEkrana(BLISTE *yazilacak){
	printf("bilgi:%d,mesaj:%s\n",yazilacak->bilgi,yazilacak->mesaj);
}

BLISTE *okuKlavye(){
	BLISTE *okunan;
	okunan=(BLISTE*)malloc(sizeof(BLISTE));
	if(okunan==NULL){
		return NULL;
	}
	puts("bilgi giriniz.");
	scanf("%d",&(okunan->bilgi));
	puts("mesaj giriniz.");
	scanf("%s",okunan->mesaj);
	return okunan;
}





















