#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;
int main()

{
	setlocale(LC_ALL,"Turkish");
	
	int sayi1,sayi2,sonuc;
	char oprt;
	 
	cout <<"�LK SAYIYI G�R�N�Z= ";
	cin >> sayi1;
	
	cout<<"�K�NC� SAYIYI G�R�N�Z= "; 
	cin>>sayi2;
	
	cout<<"B�R AR�TMAT�K OPERAT�R G�R�N�Z= ";
	oprt=getche();
	
	cout<<"    "<<endl;
	
	switch (oprt)
	   {
		case'+':{ sonuc=sayi1+sayi2;
		        cout<<"��LEM SONUCU= "<<sonuc<<endl;
			break;
		    } 
		case'-':{ sonuc=sayi1-sayi2;
		        cout<<"��LEM SONUCU= "<<sonuc<<endl;
			break;
		    }
		case '*':{ sonuc=sayi1*sayi2;
		        cout<<"��LEM SONUCU= "<<sonuc<<endl;
			break;
	        }
		case '/': {sonuc=sayi1/sayi2;
			    cout<<"��LEM SONUCU= "<<sonuc<<endl;
			break;
		    }
		    
		
		
        default: cout<<"HATALI G�R�� YAPTINIZ!!! \n ";	
		
		}
	
	system("pause");
	return 0;
	
}
