#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;
int main()
{
	int sayi1,sayi2;
	
	cout<<"sayiyi giriniz= ";
	cin>>sayi1;
	
	cout<<"kaca bolmek istiyosun=  ";
	cin>>sayi2;
	
	if (sayi1%sayi2==0)
	   cout<<sayi1<<" sayisi "<<sayi2<<" sayisina tam bolunur."<<endl;
	   
	else 
	   cout<<sayi1<<" sayisi "<<sayi2<<" sayisina tam bolunmez. "<<endl;
	   
	   system("pause");
	   return 0;       
}
