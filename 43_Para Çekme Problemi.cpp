 #include<iostream>
#include<locale.h>
#include<iomanip>  
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	
	int tutar,kalan,iki,yuz,elli,yirmi,on,bes;
	
	cout<<"�ekmek istedi�iniz tutar� giriniz:  ";    //Kullan�c�dan �ekilmek istenen tutar istenilmi�tir.
	cin>>tutar;
	
	cout<<endl;
	
	iki=tutar/200;             //Paran�n i�inde ka� tane 200 tl oldu�u hesaplan�p "iki" de�i�kenine atanm��t�r.
	kalan=tutar%200;           //Mod i�lemi kullan�larak 200 tl lik paralar ��kar�l�p kalan para hesaplanm��t�r.                         
	
	yuz=kalan/100;             //Paran�n i�inde ka� tane 100 tl oldu�u hesaplan�p "yuz" de�i�kenine atanm��t�r.
	kalan=kalan%100;           //Mod i�lemi kullan�larak 100 tl lik paralar ��kar�l�p kalan para hesaplanm��t�r. 
	
	elli=kalan/50;             //Paran�n i�inde ka� tane 50 tl oldu�u hesaplan�p "elli" de�i�kenine atanm��t�r. 
	kalan=kalan%50;            //Mod i�lemi kullan�larak 50 tl lik paralar ��kar�l�p kalan para hesaplanm��t�r. 
	
	yirmi=kalan/20;            //Paran�n i�inde ka� tane 20 tl oldu�u hesaplan�p "yirmi" de�i�kenine atanm��t�r. 
	kalan=kalan%20;            //Mod i�lemi kullan�larak 20 tl lik paralar ��kar�l�p kalan para hesaplanm��t�r.
	
	on=kalan/10;               //Paran�n i�inde ka� tane 10 tl oldu�u hesaplan�p "on" de�i�kenine atanm��t�r.            
	kalan=kalan%10;            //Mod i�lemi kullan�larak 10 tl lik paralar ��kar�l�p kalan para hesaplanm��t�r. 
	
	bes=kalan/5;               //Paran�n i�inde ka� tane 5 tl oldu�u hesaplan�p "bes" de�i�kenine atanm��t�r.
	kalan=kalan%5;             //Mod i�lemi kullan�larak 5 tl lik paralar ��kar�l�p kalan para hesaplanm��t�r.
	
	cout<<" VER�LECEK BANKLOTLAR..."<<endl
	    <<" ______________________"<<endl
	    <<"|"<<setw(3)<<iki   <<" adet  200 TL      "<<"|"<<endl
	    <<"|"<<setw(3)<<yuz   <<" adet  100 TL      "<<"|"<<endl
        <<"|"<<setw(3)<<elli  <<" adet  50  TL      "<<"|"<<endl
        <<"|"<<setw(3)<<yirmi <<" adet  20  TL      "<<"|"<<endl                 //Hesaplanan de�erler ekrana yaz�lm��t�r.
	    <<"|"<<setw(3)<<on    <<" adet  10  TL      "<<"|"<<endl
        <<"|"<<setw(3)<<bes   <<" adet   5  TL      "<<"|"<<endl                    
	    <<"|______________________"<<"|"<<endl<<endl;
	
	           
	system("pause");
	return 0;
}
