#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;

int denklem1(int,int);                      //denklem1 ad�nda 2 parametreli bir fonksiyon tan�mlanm��t�r.

int main()
{
	setlocale(LC_ALL,"Turkish");           //T�rk�e karakterler aktif hale getirilmi�tir.
	
	int i,n ;
	
	cout<<"f(i,n) Fonksiyonun i (alt s�n�r) ve n (�st s�n�r) de�erlerini giriniz."<<endl;   
	
	cout<<"(Alt S�n�r) i= ";                       //Kullan�c�dan alt s�n�r(i) bilgisini girmesi istenmi�tir.
	cin>>i;
	
	cout<<"(�st S�n�r) n= ";                       //Kullan�c�dan �st s�n�r(n) bilgisini girmesi istenmi�tir.
	cin>>n;
	
	cout<<endl;
	
	denklem1(i,n);
	
	system("pause");
	return 0;
}
int denklem1(int i,int n)                          //�ki parametreli denklem1 fonksiyonu a�a��daki gibi kodlanm��t�r.
{
	int sonuc=0;
	for(int k=i;k<=n;k++)                          //Kullan�c�dan al�nan de�erler kullan�larak i�lem yapt�r�lm��t�r.
	sonuc +=3*k*k*k+2*k*k+7;                      
	cout<<"Fonksiyonun de�eri= "<<sonuc<<endl;	   //Hesaplanan i�lem ekrana yazd�r�lm��t�r.
}


