#include<iostream>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
#include<iomanip>

/*
Kendisine parametre olarak gelen "bir þehrin þimdiki nüfusu", 
"yýllýk nüfus artýþ oraný" ve "nüfusu hesaplanmak istenen süre(yýl)" 
parametrelerine göre gelecekteki nüfusunu hesaplayýp 
çaðrýldýðý yere gönderen bir long nufus (long, float, int) prototipinde 
bir fonksiyon yazýnýz, ana programda deneyiniz. 
(örneðin: þimdiki nüfusu 67500, yýllýk nüfus artýþ oraný %3, 
7 yýl sonra nüfus ne kadar olur?)
*/
using namespace std;

void longnufus(long nfs, float yao, long nfs2);  //longnufus adýnda 3 parametreli bir fonksiyon tanýmlanmýþtýr.

int main()
{
	setlocale(LC_ALL,"Turkish");          //Türkçe karakterler aktif hale getirilmiþtir.
	
	long nfs,nfs2;
	float yao;
	
	cout<<"Þehrin þimdiki nüfusunu giriniz: ";   
	cin>>nfs;
	
	cout<<"Yýllýk artýþ oranýný giriniz (1-100): ";
	cin>>yao;
	
	cout<<"Kaç yýl sonraki nüfusu istiyorsunuz: ";
	cin>>nfs2;
	
	longnufus(nfs ,yao,nfs2);
	
	system("pause");
	return 0;
}
void longnufus(long nfs, float yao, long nfs2)    //Üç parametreli longnufus fonksiyonu aþaðýdaki gibi kodlanmýþtýr.
{
	long a=nfs;
	long b=nfs2;
	float c=yao;
	
	for(int k=0;k<b;k++)                          //Ýstenilen yýldaki nüfus hesabý yapýlmýþtýr.
	a= a+ float(a)/100*c;
	cout<<b<<" Yýl sonraki nüfus= "<<a<<endl;     //Ýstenilen yýldaki nüfus hesaplanýp ekrana yazýlmýþtýr.
}






