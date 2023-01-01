#include<iostream>
#include<locale.h>

using namespace std;

int main()

{
	setlocale(LC_ALL,"Turkish");
	
	
	int sayi1,sayi2;
	int a=5;
	int toplam;
	
	cout<<"iki sayi giriniz:"<<endl;
	cin>>sayi1;
	cin>>sayi2;
	toplam=sayi1+sayi2;
	cout<<toplam<<endl;
	
	//---------------------------------
	
	cout<<"Ilk sayiyi giriniz: ";
	cin>>sayi1;
	cout<<"Ikinci sayiyi giriniz: ";
	cin>>sayi2;
	
	toplam=sayi1+sayi2;
	
	cout<<"Sayilarin Toplami= "<<toplam<<endl;
	
	cout<<endl,cout<<endl;
	
	string ad ,soyad,no;
	char sb;
	int yas;
	float boy;
	
	
	cout<<"Adinizi giriniz: ";
	cin>>ad;
	
	cout<<"Soyadinizi giriniz: ",
	cin>>soyad;
	
	cout<<"Yasinizi giriniz: ";
	cin>>yas;
	
	cout<<"Boyunuzu giriniz: ";
	cin>>boy;
	
	cout<<"Numaranizi giriniz: ";
	cin>>no;
	cout<<endl;cout<<endl;
	
	cout<<"Sayin:"<<"  "<<ad<<" "<<soyad<<"    "<<"Bilgileriniz:"<<endl;
	cout<<yas<<"  "<<no<<"  "<<boy<< endl;
	
	system("pause");
	return 0;
	
}
