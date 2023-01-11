#include<iostream>
#include<locale.h>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sicaklik[15];
	
	int j;
	
	for(j=0;j<7;j++)
	{
		cout<<j+1<<". günün sicakligini giriniz= ";
		cin>>sicaklik[j];
	}
	
	cout<<"---girdiğiniz sicakliklar--- "<<endl;
	for(j=0;j<7;j++)
	cout<<"girdiğiniz"<<j+1<<"günün sicakligi= "<<sicaklik[j]<<endl;
	
	int toplamsicaklik=0;
	for(j=0;j<7;j++)
	toplamsicaklik +=sicaklik[j];
	
	cout<<"girdiğiniz "<<j<<"günlük toplam sicaklik= "<<toplamsicaklik<<endl;
	cout<<"girdiğiniz "<<j<<"günlük sicaklik ortalamasý= "<<toplamsicaklik/7<<endl;
	
	
	int aratoplam=sicaklik[0]+sicaklik[1]+sicaklik[2];
	cout<<"ilk 3 günün toplam sicakigi= "<<aratoplam<<endl;
	
	system("pause");
	return 0;
}
