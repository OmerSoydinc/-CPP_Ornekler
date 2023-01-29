#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;

int denklem1(int,int);                      //denklem1 adýnda 2 parametreli bir fonksiyon tanýmlanmýþtýr.

int main()
{
	setlocale(LC_ALL,"Turkish");           //Türkçe karakterler aktif hale getirilmiþtir.
	
	int i,n ;
	
	cout<<"f(i,n) Fonksiyonun i (alt sýnýr) ve n (üst sýnýr) deðerlerini giriniz."<<endl;   
	
	cout<<"(Alt Sýnýr) i= ";                       //Kullanýcýdan alt sýnýr(i) bilgisini girmesi istenmiþtir.
	cin>>i;
	
	cout<<"(Üst Sýnýr) n= ";                       //Kullanýcýdan üst sýnýr(n) bilgisini girmesi istenmiþtir.
	cin>>n;
	
	cout<<endl;
	
	denklem1(i,n);
	
	system("pause");
	return 0;
}
int denklem1(int i,int n)                          //Ýki parametreli denklem1 fonksiyonu aþaðýdaki gibi kodlanmýþtýr.
{
	int sonuc=0;
	for(int k=i;k<=n;k++)                          //Kullanýcýdan alýnan deðerler kullanýlarak iþlem yaptýrýlmýþtýr.
	sonuc +=3*k*k*k+2*k*k+7;                      
	cout<<"Fonksiyonun deðeri= "<<sonuc<<endl;	   //Hesaplanan iþlem ekrana yazdýrýlmýþtýr.
}


