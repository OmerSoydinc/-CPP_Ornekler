#include<iostream>
#include<locale.h>
using namespace std;
int main() 
{
	setlocale(LC_ALL,"Turkish");
	
	int numb;
	cout<<"Bir say� giriniz: ";
	cin>>numb;
	
	cout<<" SAYI<10  do�rulu�u "<<(numb<10)<<endl;
	cout<<" SAYI>10  do�rulu�u "<<(numb>10)<<endl;
	cout<<" SAYI=10  do�rulu�u "<<(numb==10)<<endl;
	
	
	system("pause");
	return 0;
}
