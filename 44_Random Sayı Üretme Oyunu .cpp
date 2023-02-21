#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

using namespace std;
void oyun();                             //Oyun adýnda bir fonksiyon tanýmlanmýþtýr.   

int main()
{
	setlocale(LC_ALL,"Turkish");       //Türkçe karakterler aktif hale getirilmiþtir.
	int tus;
	
	oyun();                             //Fonksiyon çaðýrýlmýþ.
	cout<<endl;
	
	cout<<"TEKRAR OYNAMAK ÝÇÝN F1;"<<endl
	    <<"ÇIKMAK ÝÇÝN ESC TUÞUNA BASINIZ..."<<endl;
	tus=getch(); 
    cout<<"SEÇÝMÝNÝZ= "<<tus<<endl;                               //Kullanýcýdan seçim yapmasý istenmiþtir.
    while(1)
    {
    	if(tus==27){cout<<"PROGRAMDAN ÇIKTINIZ..."<<endl;break;}   //Kullanýcýnýn seçimi  ESC ise programdan çýkýlýyor.
    	if(tus==59)                                                //Kullanýcýnýn seçimi F1 ise  oyun tekrar baþlar.
    	{
    		switch (tus=getch())
    		{
    			case 59:{
    				oyun();              //Oyun fonksiyonu çaðýrýlmýþtýr.
					break; 
				}
				default: cout<<"hata"<<endl;
			}
		}
	}
	system("pause");
	return 0;
}
void oyun()
{
	srand(time(NULL));
	int sayi1,sayi2,sayi3;
	char tus1,tus2;
	
    sayi1=rand()%3;    //1.Sayý tanýmlanmýþtýr.
	sayi2=rand()%3;    //2.Sayý tanýmlanmýþtýr.
	sayi3=rand()%3;    //3.Sayý tanýmlanmýþtýr.
	
	cout<<"  ÜRETÝLEN RASTGELE SAYILAR = "<<sayi1<<sayi2<<sayi3<<endl<<endl;     //Üretilen sayýlar ekrana yazdýrýlmýþtýr.
	
	int sayi=sayi1*100+sayi2*10+sayi3;
	
	switch(sayi)
	{ 
	case 222:
		for(int k=0;k<10;k++)
		{
			cout<<'\a';
		}
		cout<<"  10000 PUAN KAZANDINIZ..."<<endl;    //SAYI=222 ise kazanýlan sayý ekrana yazýlmýltýr.
		break;
	case 111:
		for(int k=0;k<5;k++)
		{
			cout<<'\a';
		}
	    cout<<"  5000 PUAN KAZANDINIZ..."<<endl;   //SAYI=111 ise kazanýlan sayý ekrana yazýlmýltýr.
		break;
	case 000:
		for(int k=0;k<2;k++)
		{
			cout<<'\a';
		}
	    cout<<"  1000 PUAN KAZANDINIZ..."<<endl;     //SAYI=000 ise kazanýlan sayý ekrana yazýlmýltýr.
		break;
	default:
	    if((sayi1==sayi2)||(sayi1==sayi3)||(sayi2==sayi3))
		cout<<'\a'<<"  500 PUAN KAZANDINIZ..."<<endl;          //Sayýlarsan iki tanesi eþit ise kazanýlan sayý ekrana yazýlmýþtýr.
		else
		cout<<"  PUAN ALAMADINIZ..."<<endl;		                //Eðer sayýlar birbirinden farklý ise puan kazanýlmadýðýný ekrana yazdýrýlmýþtýr.
	}
}
