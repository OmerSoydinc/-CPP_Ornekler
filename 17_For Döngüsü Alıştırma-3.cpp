#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	unsigned int numb;
	unsigned long fact=1;
	
	cout<<"SAYIYI GÝRÝNÝZ= ";
	cin>>numb;
	
	for(int j=numb;  j>0;  j--)
	fact=fact*j;
	
	cout<<"GÝRDÝÐÝNÝZ SAYININ FAKTÖRÝYEL DEÐERÝ= "<<fact<<endl;
	
	system("pause");
	return 0;
	
}
