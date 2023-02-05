 #include<iostream>
#include<locale.h>
#include<iomanip>  
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	
	int tutar,kalan,iki,yuz,elli,yirmi,on,bes;
	
	cout<<"Çekmek istediðiniz tutarý giriniz:  ";    //Kullanýcýdan çekilmek istenen tutar istenilmiþtir.
	cin>>tutar;
	
	cout<<endl;
	
	iki=tutar/200;             //Paranýn içinde kaç tane 200 tl olduðu hesaplanýp "iki" deðiþkenine atanmýþtýr.
	kalan=tutar%200;           //Mod iþlemi kullanýlarak 200 tl lik paralar çýkarýlýp kalan para hesaplanmýþtýr.                         
	
	yuz=kalan/100;             //Paranýn içinde kaç tane 100 tl olduðu hesaplanýp "yuz" deðiþkenine atanmýþtýr.
	kalan=kalan%100;           //Mod iþlemi kullanýlarak 100 tl lik paralar çýkarýlýp kalan para hesaplanmýþtýr. 
	
	elli=kalan/50;             //Paranýn içinde kaç tane 50 tl olduðu hesaplanýp "elli" deðiþkenine atanmýþtýr. 
	kalan=kalan%50;            //Mod iþlemi kullanýlarak 50 tl lik paralar çýkarýlýp kalan para hesaplanmýþtýr. 
	
	yirmi=kalan/20;            //Paranýn içinde kaç tane 20 tl olduðu hesaplanýp "yirmi" deðiþkenine atanmýþtýr. 
	kalan=kalan%20;            //Mod iþlemi kullanýlarak 20 tl lik paralar çýkarýlýp kalan para hesaplanmýþtýr.
	
	on=kalan/10;               //Paranýn içinde kaç tane 10 tl olduðu hesaplanýp "on" deðiþkenine atanmýþtýr.            
	kalan=kalan%10;            //Mod iþlemi kullanýlarak 10 tl lik paralar çýkarýlýp kalan para hesaplanmýþtýr. 
	
	bes=kalan/5;               //Paranýn içinde kaç tane 5 tl olduðu hesaplanýp "bes" deðiþkenine atanmýþtýr.
	kalan=kalan%5;             //Mod iþlemi kullanýlarak 5 tl lik paralar çýkarýlýp kalan para hesaplanmýþtýr.
	
	cout<<" VERÝLECEK BANKLOTLAR..."<<endl
	    <<" ______________________"<<endl
	    <<"|"<<setw(3)<<iki   <<" adet  200 TL      "<<"|"<<endl
	    <<"|"<<setw(3)<<yuz   <<" adet  100 TL      "<<"|"<<endl
        <<"|"<<setw(3)<<elli  <<" adet  50  TL      "<<"|"<<endl
        <<"|"<<setw(3)<<yirmi <<" adet  20  TL      "<<"|"<<endl                 //Hesaplanan deðerler ekrana yazýlmýþtýr.
	    <<"|"<<setw(3)<<on    <<" adet  10  TL      "<<"|"<<endl
        <<"|"<<setw(3)<<bes   <<" adet   5  TL      "<<"|"<<endl                    
	    <<"|______________________"<<"|"<<endl<<endl;
	
	           
	system("pause");
	return 0;
}
