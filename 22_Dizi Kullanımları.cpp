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
		cout<<j+1<<". günün sýcaklýðýný giriniz= ";
		cin>>sicaklik[j];
	}
	
	cout<<"---giridðiniz sýcaklýklar--- "<<endl;
	for(j=0;j<7;j++)
	cout<<"girdiðiniz"<<j+1<<"günün sýcaklýðý= "<<sicaklik[j]<<endl;
	
	int toplamsicaklik=0;
	for(j=0;j<7;j++)
	toplamsicaklik +=sicaklik[j];
	
	cout<<"girdiðiniz "<<j<<"günlük toplam sýcaklýk= "<<toplamsicaklik<<endl;
	cout<<"girdiðiniz "<<j<<"günlük sýcaklýðýn ortalamasý= "<<toplamsicaklik/7<<endl;
	
	
	int aratoplam=sicaklik[0]+sicaklik[1]+sicaklik[2];
	cout<<"ilk 3 günün toplam sýcaklýðý= "<<aratoplam<<endl;
	
	system("pause");
	return 0;
}
