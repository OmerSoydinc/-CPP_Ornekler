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
		cout<<j+1<<". g�n�n s�cakl���n� giriniz= ";
		cin>>sicaklik[j];
	}
	
	cout<<"---girid�iniz s�cakl�klar--- "<<endl;
	for(j=0;j<7;j++)
	cout<<"girdi�iniz"<<j+1<<"g�n�n s�cakl���= "<<sicaklik[j]<<endl;
	
	int toplamsicaklik=0;
	for(j=0;j<7;j++)
	toplamsicaklik +=sicaklik[j];
	
	cout<<"girdi�iniz "<<j<<"g�nl�k toplam s�cakl�k= "<<toplamsicaklik<<endl;
	cout<<"girdi�iniz "<<j<<"g�nl�k s�cakl���n ortalamas�= "<<toplamsicaklik/7<<endl;
	
	
	int aratoplam=sicaklik[0]+sicaklik[1]+sicaklik[2];
	cout<<"ilk 3 g�n�n toplam s�cakl���= "<<aratoplam<<endl;
	
	system("pause");
	return 0;
}
