#include<iostream>
#include<locale.h>

using namespace std;

int main()

{
	setlocale(LC_ALL,"Turkish");
	
	
	int sayi1,sayi2;
	int a=5;
	int toplam;
	
	cout<<"iki say� giriniz:"<<endl;
	cin>>sayi1;
	cin>>sayi2;
	toplam=sayi1+sayi2;
	cout<<toplam<<endl;
	
	//---------------------------------
	
	cout<<"�lk say�y� giriniz: ";
	cin>>sayi1;
	cout<<"�kinci say�y� giriniz: ";
	cin>>sayi2;
	
	toplam=sayi1+sayi2;
	
	cout<<"Say�lar�n ToplamI= "<<toplam<<endl;
	
	cout<<endl,cout<<endl;
	
	string ad ,soyad,no;
	char sb;
	int yas;
	float boy;
	
	
	cout<<"Ad�n�z� giriniz: ";
	cin>>ad;
	
	cout<<"Soyad�n�z� giriniz: ",
	cin>>soyad;
	
	cout<<"Ya��n�z� giriniz: ";
	cin>>yas;
	
	cout<<"Boyunuzu giriniz: ";
	cin>>boy;
	
	cout<<"Numaran�z� giriniz: ";
	cin>>no;
	cout<<endl;cout<<endl;
	
	cout<<"Say�n:"<<"  "<<ad<<" "<<soyad<<"    "<<"Bilgileriniz:"<<endl;
	cout<<yas<<"  "<<no<<"  "<<boy<< endl;
	
	system("pause");
	return 0;
	
}
