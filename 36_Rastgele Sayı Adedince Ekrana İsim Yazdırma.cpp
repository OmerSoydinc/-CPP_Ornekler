#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
/*
Çaðrýldýðýnda kendi içerisinde üreteceði 1-100 arasýndaki 
rastgele sayý kadar ekrana sizin adýnýzý yazacak 
void yaz() prototipinde bir fonksiyon yazýnýz, 
ana programda deneyiniz.
*/
using namespace std;

void yaz();                        //Yaz adýnda (parametresiz) bir fonksiyon tanýmlanmýþtýr.

int main()
{
	setlocale(LC_ALL,"Turkish");   //Türkçe karakterler aktif hale getirilmiþtir.
    yaz();                         
    
    system("pause");
    return 0;
}

void yaz()        //yaz fonksiyonu aþaðýdaki gibi kodlanmýþtýr.
{ 
    srand(time(NULL));
    int sayi=rand()%100;                      //1-100 Arasýnda rastgele bir sayý tanýmlanmýþtýr.
    
    for(int k=0;k<sayi;k++)
	cout<<setw(2)<<k+1<<" ÖMER"<<endl;	      //Ekrana tanýmlanan rastgele sayý adetinde "ÖMER" yazdýrýlmýþtýr.
	
	cout<<endl<<"Ekrana '"<<sayi<<"' adet ÖMER yazýlmýþtýr."<<endl<<endl;       //Ekrana kaç adet "ÖMER" yazýldýðýnýn bilgisi verilmiþtir.
}
