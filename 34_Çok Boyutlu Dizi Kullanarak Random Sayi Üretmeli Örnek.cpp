#include<iostream>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

/*
2.	Bir i�letmenin son 5 y�ll�k her aya ait ciro miktarlar� (100-5000 aras�nda) veri olarak bulunmaktad�r. 
	Bu veriler �zerinde a�a��daki hesaplamalar� yapt�ran program� yaz�n;
 	Bu verileri "ciro" ad�nda uygun bir dizi yap�s�na giriniz (veya 100-5000 aras�nda rastgele �retiniz)
 	Y�ll�k ortalama cirolar� ayr� ayr� hesaplayarak, ayr� bir "ortciro" ad�nda uygun bir dizi yap�s�na atay�n�z
 	Klavyeden girilen y�l�n (y�l s�ras�na g�re 1.y�l, 2.y�l vs.) ortalamas�ndan y�ksek olan aylar�n ay s�ras� ve cirolar�n� ekrana yazan
 	Klavyeden girilen y�l�n (y�l s�ras�na g�re 1.y�l, 2.y�l vs.) her �eyre�inin (1-2-3.aylar ilk �eyrek vs.) ortalamas�n� hesaplay�p ekrana yazan

*/
using namespace std;

const int ay=12;                         
const int yil=5;                           

int main()
{
	
	setlocale(LC_ALL,"Turkish");
	

	
	unsigned short ciro[yil][ay],temp;   
	int y,a;
	
	for(y=0;y<5;y++)
	
	for(a=0;a<12;a++)
	{
		cout<<"-------------------------"<<endl;
		cout<<y+1<<".YILIN  "<<a+1<<". AYININ C�ROSU= "<<ciro[y][a]%4901+100<<endl;      
		
	}	
	cout<<endl;
	
	unsigned short topciro=0;
	
	for(y=0;y<5;y++)
	{
		for(a=0;a<12;a++)
		topciro=topciro+ciro[y][a]%4901+100;
		cout<<y+1<<". YILIN ORTALAMA C�ROSU : "<<topciro/12<<endl;       
	
	}
	cout<<endl;
	


	
	//-----------------------------------------------------
		int z;
	cout<<"�STED���N�Z YILI G�R�N�Z= ";
	cin>>z;
	switch(z)
	{
		case 1:
		cout<<"1.y�l�n birinci �eyre�in ortalama cirosu=  "<<(ciro[0][0]%4901+100+ciro[0][1]%4901+100+ciro[0][2]%4901+100)/3<<endl;
		cout<<"1.y�l�n ikinci �eyre�in ortalama cirosu=   "<<(ciro[0][3]%4901+100+ciro[0][4]%4901+100+ciro[0][5]%4901+100)/3<<endl;
		cout<<"1.y�l�n ���nc� �eyre�in ortalama cirosu=   "<<(ciro[0][6]%4901+100+ciro[0][7]%4901+100+ciro[0][8]%4901+100)/3<<endl;
		cout<<"1.y�l�n d�rd�nc� �eyre�in ortalama cirosu= "<<(ciro[0][9]%4901+100+ciro[0][10]%4901+100+ciro[0][11]%4901+100)/3<<endl;
		break;
	
		case 2:	
		cout<<"2.y�l�n birinci  �eyre�in ortalama cirosu=  "<<(ciro[1][0]%4901+100+ciro[1][1]%4901+100+ciro[1][2]%4901+100)/3<<endl;
	    cout<<"2.y�l�n ikinci   �eyre�in ortalama cirosu=   "<<(ciro[1][3]%4901+100+ciro[1][4]%4901+100+ciro[1][5]%4901+100)/3<<endl;
		cout<<"2.y�l�n ���nc�   �eyre�in ortalama cirosu=   "<<(ciro[1][6]%4901+100+ciro[1][7]%4901+100+ciro[1][8]%4901+100)/3<<endl;
	    cout<<"2.y�l�n d�rd�nc� �eyre�in ortalama cirosu= "<<(ciro[1][9]%4901+100+ciro[1][10]%4901+100+ciro[1][11]%4901+100)/3<<endl;
		break;
			
		case 3:	
		cout<<"3.y�l�n birinci  �eyre�in ortalama cirosu=  "<<(ciro[2][0]%4901+100+ciro[2][1]%4901+100+ciro[2][2]%4901+100)/3<<endl;
	    cout<<"3.y�l�n ikinci   �eyre�in ortalama cirosu=   "<<(ciro[2][3]%4901+100+ciro[2][4]%4901+100+ciro[2][5]%4901+100)/3<<endl;
		cout<<"3.y�l�n ���nc�   �eyre�in ortalama cirosu=   "<<(ciro[2][6]%4901+100+ciro[2][7]%4901+100+ciro[2][8]%4901+100)/3<<endl;
	    cout<<"3.y�l�n d�rd�nc� �eyre�in ortalama cirosu= "<<(ciro[2][9]%4901+100+ciro[2][10]%4901+100+ciro[2][11]%4901+100)/3<<endl;
		break;	
		
		case 4:	
		cout<<"4.y�l�n birinci  �eyre�in ortalama cirosu=  "<<(ciro[3][0]%4901+100+ciro[3][1]%4901+100+ciro[3][2]%4901+100)/3<<endl;
	    cout<<"4.y�l�n ikinci   �eyre�in ortalama cirosu=   "<<(ciro[3][3]%4901+100+ciro[3][4]%4901+100+ciro[3][5]%4901+100)/3<<endl;
		cout<<"4.y�l�n ���nc�   �eyre�in ortalama cirosu=   "<<(ciro[3][6]%4901+100+ciro[3][7]%4901+100+ciro[3][8]%4901+100)/3<<endl;
	    cout<<"4.y�l�n d�rd�nc� �eyre�in ortalama cirosu= "<<(ciro[3][9]%4901+100+ciro[3][10]%4901+100+ciro[3][11]%4901+100)/3<<endl;
		break;
		
		case 5:	
		cout<<"5.y�l�n birinci  �eyre�in ortalama cirosu=  "<<(ciro[4][0]%4901+100+ciro[4][1]%4901+100+ciro[4][2]%4901+100)/3<<endl;
	    cout<<"5.y�l�n ikinci   �eyre�in ortalama cirosu=   "<<(ciro[4][3]%4901+100+ciro[4][4]%4901+100+ciro[4][5]%4901+100)/3<<endl;
		cout<<"5.y�l�n ���nc�   �eyre�in ortalama cirosu=   "<<(ciro[4][6]%4901+100+ciro[4][7]%4901+100+ciro[4][8]%4901+100)/3<<endl;
	    cout<<"5.y�l�n d�rd�nc� �eyre�in ortalama cirosu= "<<(ciro[4][9]%4901+100+ciro[4][10]%4901+100+ciro[4][11]%4901+100)/3<<endl;
		break;
		default:
		cout<<"HATALI G�R�� YAPTINIZ... "<<endl;
	}
	cout<<endl;	
	
	
	
	
	system("pause");
	return 0;
}
