#include<iostream>
#include<locale.h>

using namespace std;

int main()

{
	setlocale(LC_ALL,"Turkish");          //T�rk�e karakter setini etkinle�tirir.
	
	cout<<"Merhaba"<<" D�nya"<< endl; 
	cout<<"Merhaba,"<<endl<<" D�nya" <<endl;      //Alt sat�ra iner
	cout<<"Merhaba,\n D�nya" << endl;             //Alt sat�ra iner
	cout<<"Merhaba \t D�nya"<<endl;               //Araya bo�luk b�rak�r "t=TAB"
	cout<<"Merhaba,"<<"___"<<"D�nya"<<endl;       //Araya 3 adet _ koyar 
	
	cout<<48-34<<endl;  //i�lemleri yapar 
	
	cout<<endl<<endl;  //Sat�r atlar 
	
	cout<<24%6<<endl;  //MOD BULMA (KALAN)
	cout<<24/6<<endl;  //Normal b�lme i�lemi
	
	cout<<44/34<<endl;	               //B�lme i�leminin tam say� k�sm�n� yazar 
	
	cout<<float(44)/float(34)<<endl;   //Tam sonucu yazar ONDALIKLI olarak
	cout<<44.0/34.0<<endl;             // ".0" yapmak ondal�k k�sm�n�da tan�mlar
	
	system("pause");
	return 0;
}
