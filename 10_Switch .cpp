#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;
int main()
{

	setlocale(LC_ALL, "Turkish");
	
	int plaka;
	cout<<"SE��N�Z"<<"   "<<"24-32-48"<<endl;
	cin>>plaka;
	
	switch(plaka)
	{ 
	case 24:
		cout<<"ERZ�NCAN"<<endl;
		break;
	case 32:
	    cout<<"ISPARTA"<<endl;
		break;
	case 48:
	    cout<<"MU�LA"<<endl;
		break;
	default:
	    cout<<"HATALI G�RD�N"<<endl;			
	}
	
	int sayi1,sayi2,sonuc;
	char oprt;
	 
	cout << "�LK SAYIYI G�R�N�Z= " ;
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

