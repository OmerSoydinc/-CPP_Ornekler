#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

using namespace std;
void oyun();                             //Oyun ad�nda bir fonksiyon tan�mlanm��t�r.   

int main()
{
	setlocale(LC_ALL,"Turkish");       //T�rk�e karakterler aktif hale getirilmi�tir.
	int tus;
	
	oyun();                             //Fonksiyon �a��r�lm��.
	cout<<endl;
	
	cout<<"TEKRAR OYNAMAK ���N F1;"<<endl
	    <<"�IKMAK ���N ESC TU�UNA BASINIZ..."<<endl;
	tus=getch(); 
    cout<<"SE��M�N�Z= "<<tus<<endl;                               //Kullan�c�dan se�im yapmas� istenmi�tir.
    while(1)
    {
    	if(tus==27){cout<<"PROGRAMDAN �IKTINIZ..."<<endl;break;}   //Kullan�c�n�n se�imi  ESC ise programdan ��k�l�yor.
    	if(tus==59)                                                //Kullan�c�n�n se�imi F1 ise  oyun tekrar ba�lar.
    	{
    		switch (tus=getch())
    		{
    			case 59:{
    				oyun();              //Oyun fonksiyonu �a��r�lm��t�r.
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
	
    sayi1=rand()%3;    //1.Say� tan�mlanm��t�r.
	sayi2=rand()%3;    //2.Say� tan�mlanm��t�r.
	sayi3=rand()%3;    //3.Say� tan�mlanm��t�r.
	
	cout<<"  �RET�LEN RASTGELE SAYILAR = "<<sayi1<<sayi2<<sayi3<<endl<<endl;     //�retilen say�lar ekrana yazd�r�lm��t�r.
	
	int sayi=sayi1*100+sayi2*10+sayi3;
	
	switch(sayi)
	{ 
	case 222:
		for(int k=0;k<10;k++)
		{
			cout<<'\a';
		}
		cout<<"  10000 PUAN KAZANDINIZ..."<<endl;    //SAYI=222 ise kazan�lan say� ekrana yaz�lm�lt�r.
		break;
	case 111:
		for(int k=0;k<5;k++)
		{
			cout<<'\a';
		}
	    cout<<"  5000 PUAN KAZANDINIZ..."<<endl;   //SAYI=111 ise kazan�lan say� ekrana yaz�lm�lt�r.
		break;
	case 000:
		for(int k=0;k<2;k++)
		{
			cout<<'\a';
		}
	    cout<<"  1000 PUAN KAZANDINIZ..."<<endl;     //SAYI=000 ise kazan�lan say� ekrana yaz�lm�lt�r.
		break;
	default:
	    if((sayi1==sayi2)||(sayi1==sayi3)||(sayi2==sayi3))
		cout<<'\a'<<"  500 PUAN KAZANDINIZ..."<<endl;          //Say�larsan iki tanesi e�it ise kazan�lan say� ekrana yaz�lm��t�r.
		else
		cout<<"  PUAN ALAMADINIZ..."<<endl;		                //E�er say�lar birbirinden farkl� ise puan kazan�lmad���n� ekrana yazd�r�lm��t�r.
	}
}
