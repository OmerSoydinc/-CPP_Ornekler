#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int karsay=0;
	int kelsay=1;
	char ch='a';
	
	cout<<"BÝR CÜMLE GÝRÝNÝZ "<<endl;
	
	while(ch !='\r')
	{
		ch=getche();
		
		if(ch==' ')
		kelsay++;
		else 
		karsay++;
	}
	cout<<"KElÝME SAYISI=  "<<kelsay<<endl;
	cout<<"KARAKTER SAYISI=  "<<(karsay-1)<<endl;
	
	system("pause");
	return 0;
}

