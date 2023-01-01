#include<iostream>
#include<locale.h>

using namespace std;

int main()

{
	setlocale(LC_ALL,"Turkish");          //Türkçe karakter setini etkinleþtirir.
	
	cout<<"Merhaba"<<" Dünya"<< endl; 
	cout<<"Merhaba,"<<endl<<" Dünya" <<endl;      //Alt satýra iner
	cout<<"Merhaba,\n Dünya" << endl;             //Alt satýra iner
	cout<<"Merhaba \t Dünya"<<endl;               //Araya boþluk býrakýr "t=TAB"
	cout<<"Merhaba,"<<"___"<<"Dünya"<<endl;       //Araya 3 adet _ koyar 
	
	cout<<48-34<<endl;  //iþlemleri yapar 
	
	cout<<endl<<endl;  //Satýr atlar 
	
	cout<<24%6<<endl;  //MOD BULMA (KALAN)
	cout<<24/6<<endl;  //Normal bölme iþlemi
	
	cout<<44/34<<endl;	               //Bölme iþleminin tam sayý kýsmýný yazar 
	
	cout<<float(44)/float(34)<<endl;   //Tam sonucu yazar ONDALIKLI olarak
	cout<<44.0/34.0<<endl;             // ".0" yapmak ondalýk kýsmýnýda tanýmlar
	
	system("pause");
	return 0;
}
