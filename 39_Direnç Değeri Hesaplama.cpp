#include<iostream>
#include<locale.h>
#include<math.h>

/*
void esdeger(int&, float&, int, int, int) prototipinde 
kendisine parametre olarak yollanan 
3 adet direncin seri ve paralel eþdeðerini hesaplayan, 
eþdeðerleri geri gönderen bir fonksiyon yazýnýz, 
ana programda deneyiniz. 
3 adet direnç ana programda klavyeden girilecek
*/
using namespace std;

void esdeger(int& seri, float& paralel, int d1 , int d2, int d3);   //esdeger adýnda 5 parametreli bir fonksiyon tanýmlanmýþtýr.

int main()
{
	setlocale(LC_ALL,"Turkish");                         //Türkçe karakterler aktif hale getirilmiþtir.
	
	int d1,d2,d3,seri;
	float paralel;
	
	cout<<"1.Direncin deðerini giriniz= ";
	cin>>d1;
	
	cout<<"2.Direncin deðerini giriniz= ";               //3 adet direncin deðeri kullanýcýdan istenmiþtir. 
	cin>>d2;
	
	cout<<"3.Direncin deðerini giriniz= ";
	cin>>d3;
	
	esdeger(seri,paralel,d1,d2,d3);      
	
	system("pause");
	return 0;
}
void esdeger(int& seri, float& paralel, int d1 , int d2, int d3)     //Beþ parametreli esdeger fonksiyonu aþaðýdaki gibi kodlanmýþtýr.
{
	
	seri=d1+d2+d3;                                                                       //Seri baðlý direnç hesaplanmýþtýr.
	cout<<"Girdiðiniz 3 adet direncin seri baðlý iken eþdeðer direnci= "<<seri<<endl;    //Hesabý yapýlan seri baðlý direncin sonucu ekrana yzdýrýlmýþtýr. 
	
	paralel=(float) d1*d2*d3/(d2*d3+d1*d3+d1*d2);                                           //Paralel baðlý direnç hesaplanmýþtýr.
	cout<<"Girdiðiniz 3 adet direncin paralel baðlý iken eþdeðer direnci= "<<paralel<<endl;	//Hesabý yapýlan paralel baðlý direncin sonucu ekrana yzdýrýlmýþtýr. 
}
