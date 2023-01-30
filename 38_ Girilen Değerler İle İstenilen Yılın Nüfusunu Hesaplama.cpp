#include<iostream>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
#include<iomanip>

/*
Kendisine parametre olarak gelen "bir �ehrin �imdiki n�fusu", 
"y�ll�k n�fus art�� oran�" ve "n�fusu hesaplanmak istenen s�re(y�l)" 
parametrelerine g�re gelecekteki n�fusunu hesaplay�p 
�a�r�ld��� yere g�nderen bir long nufus (long, float, int) prototipinde 
bir fonksiyon yaz�n�z, ana programda deneyiniz. 
(�rne�in: �imdiki n�fusu 67500, y�ll�k n�fus art�� oran� %3, 
7 y�l sonra n�fus ne kadar olur?)
*/
using namespace std;

void longnufus(long nfs, float yao, long nfs2);  //longnufus ad�nda 3 parametreli bir fonksiyon tan�mlanm��t�r.

int main()
{
	setlocale(LC_ALL,"Turkish");          //T�rk�e karakterler aktif hale getirilmi�tir.
	
	long nfs,nfs2;
	float yao;
	
	cout<<"�ehrin �imdiki n�fusunu giriniz: ";   
	cin>>nfs;
	
	cout<<"Y�ll�k art�� oran�n� giriniz (1-100): ";
	cin>>yao;
	
	cout<<"Ka� y�l sonraki n�fusu istiyorsunuz: ";
	cin>>nfs2;
	
	longnufus(nfs ,yao,nfs2);
	
	system("pause");
	return 0;
}
void longnufus(long nfs, float yao, long nfs2)    //�� parametreli longnufus fonksiyonu a�a��daki gibi kodlanm��t�r.
{
	long a=nfs;
	long b=nfs2;
	float c=yao;
	
	for(int k=0;k<b;k++)                          //�stenilen y�ldaki n�fus hesab� yap�lm��t�r.
	a= a+ float(a)/100*c;
	cout<<b<<" Y�l sonraki n�fus= "<<a<<endl;     //�stenilen y�ldaki n�fus hesaplan�p ekrana yaz�lm��t�r.
}






