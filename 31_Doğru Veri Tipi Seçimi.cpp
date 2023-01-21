#include<iostream>
#include<cmath>    //BU KÜTÜPHANE AÇILMAZSA KAREKÖK BULMA YAPILAMAZ!!!!!!
using namespace std;
int main()
{
	int signedVar=1500000000;
	unsigned int unsignVar=1500000000;
	
	signedVar=(	signedVar*2)/3;
	
	unsignVar=(unsignVar*2)/3;                                           //VERÝYE UYGUN TÝP TANINMALIO YOKSA ÝLK YAZILAN VERÝ GÝBÝ HATALI SONUÇ BULUNUR.
	                                                                    
	cout<<"signedVar= "<< signedVar <<endl;
	cout<<"unsignVar= "<< unsignVar <<endl;
	
	
	//------------------------------------------------------------------
	int count=7;
	float avgWeight=155.5F;                                             //BÜYÜK ARALAIKLAR KÜÇÜKLERÝ KAPSADIÐI ÝÇÝN SIKINTI ÇIKMAZ.
	
	double totalWeight=count*avgWeight;
	cout<<"totalWeight= "<< totalWeight<<endl;

	system("pause");
	return 0;
}
