#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int a;
	int b,sayi,adet;
	int tutar=235;
	int i=0;
	int x,y=25;
	
	float kuralis=7.8765;
	float kursatis=7.9874;
	float kurfark;
	
	cout<<a<<endl;
	cout<<tutar<<endl;
	cout<<i<<y<<endl;
	cout<<i<<"   "<<y<<endl;
	cout<<kuralis<<endl;
	
	int toplam;
	toplam=tutar+y;
	cout<<toplam<<endl;
	cout<<"işlem sonucu="<<toplam;
	cout<<endl;
	
	b=tutar/y;
	cout<<b<<endl;
	
	x=tutar%y;
	cout<<x<<endl;
	
	kurfark=kursatis-kuralis;
	cout<<kurfark<<endl;
	
	float k;
	k=kursatis/kuralis;
	cout<<k<<endl;
	
	k=tutar/y;
	cout<<k<<endl;
	
	k=float(tutar)/float(y);
	cout<<k<<endl;
	
	cout<<"\n\n\n";
	
	char blok;
	char cinsiyet;
	char gurup='D';
	
	string ad="Ali";
	string no="2012721018";
	string adres;
	string bolum="COUMPUTER";
	
	cout<<gurup<<endl;
	cout<<bolum<<endl;
	cout<<"MERHABA"<<"\t"<<ad<<"\t"<<no<<endl;
	
	int sube='A';
	cout<<sube<<endl;
	cout<<endl;
	
	char kod=65;
	cout<<kod<<endl;
	
	system("pause");
	return 0;
}
