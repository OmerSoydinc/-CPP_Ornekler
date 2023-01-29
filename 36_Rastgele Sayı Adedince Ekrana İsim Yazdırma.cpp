#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
/*
�a�r�ld���nda kendi i�erisinde �retece�i 1-100 aras�ndaki 
rastgele say� kadar ekrana sizin ad�n�z� yazacak 
void yaz() prototipinde bir fonksiyon yaz�n�z, 
ana programda deneyiniz.
*/
using namespace std;

void yaz();                        //Yaz ad�nda (parametresiz) bir fonksiyon tan�mlanm��t�r.

int main()
{
	setlocale(LC_ALL,"Turkish");   //T�rk�e karakterler aktif hale getirilmi�tir.
    yaz();                         
    
    system("pause");
    return 0;
}

void yaz()        //yaz fonksiyonu a�a��daki gibi kodlanm��t�r.
{ 
    srand(time(NULL));
    int sayi=rand()%100;                      //1-100 Aras�nda rastgele bir say� tan�mlanm��t�r.
    
    for(int k=0;k<sayi;k++)
	cout<<setw(2)<<k+1<<" �MER"<<endl;	      //Ekrana tan�mlanan rastgele say� adetinde "�MER" yazd�r�lm��t�r.
	
	cout<<endl<<"Ekrana '"<<sayi<<"' adet �MER yaz�lm��t�r."<<endl<<endl;       //Ekrana ka� adet "�MER" yaz�ld���n�n bilgisi verilmi�tir.
}
