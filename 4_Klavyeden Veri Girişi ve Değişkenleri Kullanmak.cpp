#include<iostream>
#include<locale.h>

using namespace std;

int main()

{
	setlocale(LC_ALL,"Turkish");
	
	
	int sayi1,sayi2;
	int a=5;
	int toplam;
	
	cout<<"iki sayý giriniz:"<<endl;
	cin>>sayi1;
	cin>>sayi2;
	toplam=sayi1+sayi2;
	cout<<toplam<<endl;
	
	//---------------------------------
	
	cout<<"Ýlk sayýyý giriniz: ";
	cin>>sayi1;
	cout<<"Ýkinci sayýyý giriniz: ";
	cin>>sayi2;
	
	toplam=sayi1+sayi2;
	
	cout<<"Sayýlarýn ToplamI= "<<toplam<<endl;
	
	cout<<endl,cout<<endl;
	
	string ad ,soyad,no;
	char sb;
	int yas;
	float boy;
	
	
	cout<<"Adýnýzý giriniz: ";
	cin>>ad;
	
	cout<<"Soyadýnýzý giriniz: ",
	cin>>soyad;
	
	cout<<"Yaþýnýzý giriniz: ";
	cin>>yas;
	
	cout<<"Boyunuzu giriniz: ";
	cin>>boy;
	
	cout<<"Numaranýzý giriniz: ";
	cin>>no;
	cout<<endl;cout<<endl;
	
	cout<<"Sayýn:"<<"  "<<ad<<" "<<soyad<<"    "<<"Bilgileriniz:"<<endl;
	cout<<yas<<"  "<<no<<"  "<<boy<< endl;
	
	system("pause");
	return 0;
	
}
