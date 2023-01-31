#include<iostream>
#include<locale.h>
#include<math.h>

/*
void esdeger(int&, float&, int, int, int) prototipinde 
kendisine parametre olarak yollanan 
3 adet direncin seri ve paralel e�de�erini hesaplayan, 
e�de�erleri geri g�nderen bir fonksiyon yaz�n�z, 
ana programda deneyiniz. 
3 adet diren� ana programda klavyeden girilecek
*/
using namespace std;

void esdeger(int& seri, float& paralel, int d1 , int d2, int d3);   //esdeger ad�nda 5 parametreli bir fonksiyon tan�mlanm��t�r.

int main()
{
	setlocale(LC_ALL,"Turkish");                         //T�rk�e karakterler aktif hale getirilmi�tir.
	
	int d1,d2,d3,seri;
	float paralel;
	
	cout<<"1.Direncin de�erini giriniz= ";
	cin>>d1;
	
	cout<<"2.Direncin de�erini giriniz= ";               //3 adet direncin de�eri kullan�c�dan istenmi�tir. 
	cin>>d2;
	
	cout<<"3.Direncin de�erini giriniz= ";
	cin>>d3;
	
	esdeger(seri,paralel,d1,d2,d3);      
	
	system("pause");
	return 0;
}
void esdeger(int& seri, float& paralel, int d1 , int d2, int d3)     //Be� parametreli esdeger fonksiyonu a�a��daki gibi kodlanm��t�r.
{
	
	seri=d1+d2+d3;                                                                       //Seri ba�l� diren� hesaplanm��t�r.
	cout<<"Girdi�iniz 3 adet direncin seri ba�l� iken e�de�er direnci= "<<seri<<endl;    //Hesab� yap�lan seri ba�l� direncin sonucu ekrana yzd�r�lm��t�r. 
	
	paralel=(float) d1*d2*d3/(d2*d3+d1*d3+d1*d2);                                           //Paralel ba�l� diren� hesaplanm��t�r.
	cout<<"Girdi�iniz 3 adet direncin paralel ba�l� iken e�de�er direnci= "<<paralel<<endl;	//Hesab� yap�lan paralel ba�l� direncin sonucu ekrana yzd�r�lm��t�r. 
}
