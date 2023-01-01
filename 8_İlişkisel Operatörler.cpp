#include<iostream>
#include<locale.h>
using namespace std;
int main() 
{
	setlocale(LC_ALL,"Turkish");
	
	int numb;
	cout<<"Bir sayý giriniz: ";
	cin>>numb;
	
	cout<<" SAYI<10  doðruluðu "<<(numb<10)<<endl;
	cout<<" SAYI>10  doðruluðu "<<(numb>10)<<endl;
	cout<<" SAYI=10  doðruluðu "<<(numb==10)<<endl;
	
	
	system("pause");
	return 0;
}
