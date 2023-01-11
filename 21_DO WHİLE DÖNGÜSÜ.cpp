#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Türkish");
	
	long dividend,divisor;
	char ch;
	
	do{
		cout<<"BOLUNECEK SAYIYI GIRINIZ= ";cin>>dividend;
		cout<<"BOLENI GIRINIZ= ";cin>>divisor;
		cout<<"SONUC= "<<dividend/divisor<<endl;
		cout<<"KALAN= "<<dividend%divisor;
		
		cout<<"\n DEVAM ETMEK ISTERMISIN ? "<<"EVET=y     HAYIR=n";
		cin>>ch;
	}
    while(ch !='n');
	
	system("pause");
	return 0;   
}
