#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;
int main()
{
	unsigned int numb;
	unsigned int fact=1;
	cout<<"---FAKTORIYEL HESAPLAMA---"<<endl;
	
	cout<<"Bir sayi giriniz= ";
	cin>>numb;
	
	while(numb>0)
	{
		fact=fact*numb;
		numb--;
	}
	cout<<"Sayinin faktoriyel degeri= "<<fact<<endl;
	system("pause");
	return 0;
}
