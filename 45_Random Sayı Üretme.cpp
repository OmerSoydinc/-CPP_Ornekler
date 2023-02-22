#include<iostream>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

void sayiuret(int sayi1,int sayi2,int sayi3[50]);   //Sayiuret ad�nda 3 parametreli  bir fonksiyon tan�mlanm��t�r.

int main()
{
	setlocale(LC_ALL,"Turkish");                   //T�rk�e karakterler aktif hale getirilmi�tir.
	
	int sayi1,sayi2;                               //sayi1 ve sayi2 ad�nda 2 adet �retilecek say�lar say� int tipinde tan�mlanm��t�r.
	int sayi3[50];                                 //sayi3 ad�nda 50 kapasiteli bir dizi tan�mlanm��t�r.(�retilecek 50 say� i�in.)
	
	sayiuret(sayi1,sayi2,sayi3);
	
    system ("pause");
    return 0;	
}
void sayiuret(int sayi1,int sayi2 ,int sayi3[50])    //Sayiuret fonksiyonu a�a��daki gibi kodlanm��t�r. 
{
	int yas,k;
	
	srand(time(NULL));
	
	sayi1=rand();                                             //1.Say� rastgele �retilmi�tir.
	sayi2=rand();                                             //2.Say� rastgele �retilmi�tir.
	
	cout<<"Aras�nda 50 adet say� �retilcek say�lar.."<<endl;
	cout<<"1.SAYI= "<<sayi1<<endl;
	cout<<"2.SAYI= "<<sayi2<<endl;                                       //Aras�nda say� �retilecek iki say� ekrana yazd�r�lm��t�r.
	
	cout<<endl;
	
	if(sayi1>sayi2){                                                     //Aras�nda say� �retilecek 1.Say� b�y�k ise yap�lacak i�lemler.
		for( k=0;k<50;k++)
		{
			yas=rand()%(sayi1-sayi2+1)+sayi2;
		    sayi3[k]=yas;                                                //�retilen say�lar s�rayla dizi i�erisine entegre edilmi�tir. 
	    }
		for(k=0;k<50;k++)
	    cout<<setw(2)<<k+1<<". say�= "<<setw(6)<<sayi3[k]<<endl;         //�retilen say�lar ekrana yazd�r�lm��t�r.
	}else 
	
	 if(sayi2>sayi1){                                                    //Aras�nda say� �retilecek 2.Say� b�y�k ise yap�lacak i�lemler.
	 	for( k=0;k<50;k++)
		{
			yas=rand()%(sayi2-sayi1+1)+sayi1;
		    sayi3[k]=yas;                                                //�retilen say�lar s�rayla dizi i�erisine entegre edilmi�tir. 
	    }
		for(k=0;k<50;k++)
	    cout<<setw(2)<<k+1<<". say�= "<<setw(6)<<sayi3[k]<<endl;         //�retilen say�lar ekrana yazd�r�lm��t�r.
	}
}

