#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;
int main()
{
	
	setlocale(LC_ALL,"Turkish");
	
	bool a=true;
	bool b=false;
	cout<<a<<endl;
	cout<<b<<endl;
	
	bool c=1;
	bool d=0;
	cout<<c<<endl;
	cout<<d<<endl;
	
	int x;
	bool k,m;
	
	cout<<"B�R SAYI G�R�N�Z= ";
	cin>>x;
	
	k=x>5;
	cout<<k<<endl;
	
	if (k==1)
	    cout<<"SAYI 5 DEN B�Y�KT�R. "<<endl;
	    else 
	    cout<<"SAYI 5 VEYA 5 DEN K���KT�R. "<<endl;
	    
	m=x==5;
	cout<<m<<endl;
	if (m==1)
	    cout<<"SAYI DE�ER� 5 D�R. ";
	    else 
	    cout<<"SAYI 5 DE��LD�R !!! "<<endl;
	
	system("pause");
	return 0;
}
