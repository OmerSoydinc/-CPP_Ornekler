#include<iostream>
#include<cmath>    //BU K�T�PHANE A�ILMAZSA KAREK�K BULMA YAPILAMAZ!!!!!!
using namespace std;
int main()
{
	int signedVar=1500000000;
	unsigned int unsignVar=1500000000;
	
	signedVar=(	signedVar*2)/3;
	
	unsignVar=(unsignVar*2)/3;                                           //VER�YE UYGUN T�P TANINMALIO YOKSA �LK YAZILAN VER� G�B� HATALI SONU� BULUNUR.
	                                                                    
	cout<<"signedVar= "<< signedVar <<endl;
	cout<<"unsignVar= "<< unsignVar <<endl;
	
	
	//------------------------------------------------------------------
	int count=7;
	float avgWeight=155.5F;                                             //B�Y�K ARALAIKLAR K���KLER� KAPSADI�I ���N SIKINTI �IKMAZ.
	
	double totalWeight=count*avgWeight;
	cout<<"totalWeight= "<< totalWeight<<endl;

	system("pause");
	return 0;
}
