#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	unsigned int numb;
	unsigned long fact=1;
	
	cout<<"SAYIYI G�R�N�Z= ";
	cin>>numb;
	
	for(int j=numb;  j>0;  j--)
	fact=fact*j;
	
	cout<<"G�RD���N�Z SAYININ FAKT�R�YEL DE�ER�= "<<fact<<endl;
	
	system("pause");
	return 0;
	
}
