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
	
	cout<<"bir cümle giriniz "<<endl;
	
	while(ch !='\r')
	{
		ch=getche();
		
		if(ch==' ')
		kelsay++;
		else 
		karsay++;
	}
	cout<<"kelime sayısı=  "<<kelsay<<endl;
	cout<<"karakter sayısı=  "<<(karsay-1)<<endl;
	
	system("pause");
	return 0;
}

