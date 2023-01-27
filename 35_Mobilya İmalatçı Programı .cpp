#include<iostream>
#include<locale.h>         
/*
"kumas" yap�s� "ipliktipi, dm2agirlik, dokumatipi, renk, miktar" �yelerinden ve 
 "iskelet" yap�s� "malzeme, birle�tirme, tarz, boyut, miktar" �yelerinden olu�an 
"mobilya" yap�s� "kumas kaplama, iskelet malzeme" �yelerinden olu�acak
 bir veri yap�s� tasar�m� �zerine bir mobilya imalat��s�na �retti�i 10 �r�n i�in veri giri�i, listeleme deneyebilece�i bir program yaz�n�z.

ipliktipi, dm2agirlik, dokumatipi, renk, miktar, malzeme, birle�tirme, tarz, boyut, miktar de�i�kenlerinin 
�rnek verileri ve veritiplerini konuya uygun olarak siz belirleyin!

*/
using namespace std;

	struct kumas               //kuma� ad�ndaki yap� i�erisinde farkl� tiplerden olu�an �zellikler tan�mlanm��t�r.
	{
		string ipliktipi;
		float agirlik;
		string doktipi;
		string renk;
		float miktar;
	};
	
	struct iskelet             //�skelet ad�ndaki yap� i�erisinde farkl� tiplerden olu�an �zellikler tan�mlanm��t�r. 
	{
		string malzeme;
		string birlestirme;
		string tarz;
		float boyuten;
		float boyutboy;
		float boyutyukseklik;
		float miktar;
	};
	
    struct mobilya                //Mobilya ad�ndaki yap� i�erisinde;  
	{ 
		kumas kaplama;            //Kaplama de�i�keni kuma� yap�s�ndan tan�mlanm��t�r.
		iskelet malzeme;          //Malzeme de�i�keni iskelet yap�s�ndan tan�mlanm��t�r.
	}mobilya[10];                 //Dizi(Arrays) kullanarak 10 adet mobilya tan�mlanm��t�r.
	

int main()
{
	setlocale(LC_ALL,"Turkish");  //T�rk�e karakterler aktif hale getirilmi�tir.
	

	int k=0;
	for(k=0;k<5;k++)            //Yard�mc� 'k' de�i�keni kullan�larak for d�ng�s�ne girilerek 10 adet �r�n�n bilgleri kullan�c� taraf�ndan girilmesi istenmi�tir.
	{
	
	
	cout<<k+1<<". �R�N�N B�LG�LER�N� SIRAYLA G�R�N�Z "<<endl;
	cout<<"--------------------------------------"<<endl;
	
	cout<<"...KUMA� B�LG�LER�..."<<endl<<endl;
	
	cout<<"�PL�K T�P�:     ";cin>>mobilya[k].kaplama.ipliktipi; 
	cout<<"A�IRLI�I(gr):   ";cin>>mobilya[k].kaplama.agirlik;
	cout<<"DOKUMA T�P�:    ";cin>>mobilya[k].kaplama.doktipi;
	cout<<"RENG�:          ";cin>>mobilya[k].kaplama.renk;
	cout<<"M�KTARI:        ";cin>>mobilya[k].kaplama.miktar;
	
	cout<<endl;
	
	cout<<"...�SKELET B�LG�LER�... "<<endl;
	
	cout<<"MALZEME:        ";cin>>mobilya[k].malzeme.malzeme;
	cout<<"B�RLE�T�RME:    ";cin>>mobilya[k].malzeme.birlestirme;
	cout<<"TARZ:           ";cin>>mobilya[k].malzeme.tarz;
	cout<<"EN�(m):         ";cin>>mobilya[k].malzeme.boyuten;
	cout<<"BOYU(m):        ";cin>>mobilya[k].malzeme.boyutboy;
	cout<<"Y�KSEKL���(m):  ";cin>>mobilya[k].malzeme.boyutyukseklik;
	cout<<"M�KTARI:        ";cin>>mobilya[k].malzeme.miktar;
	cout<<endl<<endl;
	
	system("cls");                  //�zelli�i girilen her �r�nden sonra ekran� temizlemek i�in kullan�lm��t�r.

    }
    
    cout<<"B�LG�LER� G�R�LEN �R�NLER"<<endl<<endl;
    
    for(int a=0;a<10;a++)           //Yard�mc� 'a' de�i�keni ile for d�ng�s�n� kullan�larak kullan�c� taraf�ndan girilen �r�n bilgileri ekrana yazd�r�lm��t�r.
    {
    cout<<a+1<<". �R�N�N B�LG�LER� "<<endl<<endl
    	     <<"�PL�K T�P�=     "<<mobilya[a].kaplama.ipliktipi<<endl 
    	     <<"A�IRLI�I=       "<<mobilya[a].kaplama.agirlik<<endl
             <<"DOKUMA T�P�=    "<<mobilya[a].kaplama.doktipi<<endl
    	     <<"RENG�=          "<<mobilya[a].kaplama.renk<<endl
    	     <<"M�KTARI=        "<<mobilya[a].kaplama.miktar<<endl
    	     <<"MALZEME=        "<<mobilya[a].malzeme.malzeme<<endl
    	     <<"B�RLE�T�RME=    "<<mobilya[a].malzeme.birlestirme<<endl
    	     <<"TARZ=           "<<mobilya[a].malzeme.tarz<<endl
    	     <<"EN�(m)=         "<<mobilya[a].malzeme.boyuten<<endl
    	     <<"BOYU(m)=        "<<mobilya[a].malzeme.boyutboy<<endl
    	     <<"Y�KSEKL���(m)=  "<<mobilya[a].malzeme.boyutyukseklik<<endl
             <<"M�KTARI=        "<<mobilya[a].malzeme.miktar<<endl<<endl;
	}
    	
	system("pause");
	return 0;
}
