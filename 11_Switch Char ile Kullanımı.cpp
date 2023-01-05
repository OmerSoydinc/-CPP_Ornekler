#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;
int main()

{
	setlocale(LC_ALL,"Turkish");
	
	int sayi1,sayi2,sonuc;
	char oprt;
	 
	cout <<"ÝLK SAYIYI GÝRÝNÝZ= ";
	cin >> sayi1;
	
	cout<<"ÝKÝNCÝ SAYIYI GÝRÝNÝZ= "; 
	cin>>sayi2;
	
	cout<<"BÝR ARÝTMATÝK OPERATÖR GÝRÝNÝZ= ";
	oprt=getche();
	
	cout<<"    "<<endl;
	
	switch (oprt)
	   {
		case'+':{ sonuc=sayi1+sayi2;
		        cout<<"ÝÞLEM SONUCU= "<<sonuc<<endl;
			break;
		    } 
		case'-':{ sonuc=sayi1-sayi2;
		        cout<<"ÝÞLEM SONUCU= "<<sonuc<<endl;
			break;
		    }
		case '*':{ sonuc=sayi1*sayi2;
		        cout<<"ÝÞLEM SONUCU= "<<sonuc<<endl;
			break;
	        }
		case '/': {sonuc=sayi1/sayi2;
			    cout<<"ÝÞLEM SONUCU= "<<sonuc<<endl;
			break;
		    }
		    
		
		
        default: cout<<"HATALI GÝRÝÞ YAPTINIZ!!! \n ";	
		
		}
	
	system("pause");
	return 0;
	
}
