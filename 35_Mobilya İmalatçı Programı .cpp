#include<iostream>
#include<locale.h>         
/*
"kumas" yapýsý "ipliktipi, dm2agirlik, dokumatipi, renk, miktar" üyelerinden ve 
 "iskelet" yapýsý "malzeme, birleþtirme, tarz, boyut, miktar" üyelerinden oluþan 
"mobilya" yapýsý "kumas kaplama, iskelet malzeme" üyelerinden oluþacak
 bir veri yapýsý tasarýmý üzerine bir mobilya imalatçýsýna ürettiði 10 ürün için veri giriþi, listeleme deneyebileceði bir program yazýnýz.

ipliktipi, dm2agirlik, dokumatipi, renk, miktar, malzeme, birleþtirme, tarz, boyut, miktar deðiþkenlerinin 
örnek verileri ve veritiplerini konuya uygun olarak siz belirleyin!

*/
using namespace std;

	struct kumas               //kumaþ adýndaki yapý içerisinde farklý tiplerden oluþan özellikler tanýmlanmýþtýr.
	{
		string ipliktipi;
		float agirlik;
		string doktipi;
		string renk;
		float miktar;
	};
	
	struct iskelet             //Ýskelet adýndaki yapý içerisinde farklý tiplerden oluþan özellikler tanýmlanmýþtýr. 
	{
		string malzeme;
		string birlestirme;
		string tarz;
		float boyuten;
		float boyutboy;
		float boyutyukseklik;
		float miktar;
	};
	
    struct mobilya                //Mobilya adýndaki yapý içerisinde;  
	{ 
		kumas kaplama;            //Kaplama deðiþkeni kumaþ yapýsýndan tanýmlanmýþtýr.
		iskelet malzeme;          //Malzeme deðiþkeni iskelet yapýsýndan tanýmlanmýþtýr.
	}mobilya[10];                 //Dizi(Arrays) kullanarak 10 adet mobilya tanýmlanmýþtýr.
	

int main()
{
	setlocale(LC_ALL,"Turkish");  //Türkçe karakterler aktif hale getirilmiþtir.
	

	int k=0;
	for(k=0;k<5;k++)            //Yardýmcý 'k' deðiþkeni kullanýlarak for döngüsüne girilerek 10 adet ürünün bilgleri kullanýcý tarafýndan girilmesi istenmiþtir.
	{
	
	
	cout<<k+1<<". ÜRÜNÜN BÝLGÝLERÝNÝ SIRAYLA GÝRÝNÝZ "<<endl;
	cout<<"--------------------------------------"<<endl;
	
	cout<<"...KUMAÞ BÝLGÝLERÝ..."<<endl<<endl;
	
	cout<<"ÝPLÝK TÝPÝ:     ";cin>>mobilya[k].kaplama.ipliktipi; 
	cout<<"AÐIRLIÐI(gr):   ";cin>>mobilya[k].kaplama.agirlik;
	cout<<"DOKUMA TÝPÝ:    ";cin>>mobilya[k].kaplama.doktipi;
	cout<<"RENGÝ:          ";cin>>mobilya[k].kaplama.renk;
	cout<<"MÝKTARI:        ";cin>>mobilya[k].kaplama.miktar;
	
	cout<<endl;
	
	cout<<"...ÝSKELET BÝLGÝLERÝ... "<<endl;
	
	cout<<"MALZEME:        ";cin>>mobilya[k].malzeme.malzeme;
	cout<<"BÝRLEÞTÝRME:    ";cin>>mobilya[k].malzeme.birlestirme;
	cout<<"TARZ:           ";cin>>mobilya[k].malzeme.tarz;
	cout<<"ENÝ(m):         ";cin>>mobilya[k].malzeme.boyuten;
	cout<<"BOYU(m):        ";cin>>mobilya[k].malzeme.boyutboy;
	cout<<"YÜKSEKLÝÐÝ(m):  ";cin>>mobilya[k].malzeme.boyutyukseklik;
	cout<<"MÝKTARI:        ";cin>>mobilya[k].malzeme.miktar;
	cout<<endl<<endl;
	
	system("cls");                  //Özelliði girilen her üründen sonra ekraný temizlemek için kullanýlmýþtýr.

    }
    
    cout<<"BÝLGÝLERÝ GÝRÝLEN ÜRÜNLER"<<endl<<endl;
    
    for(int a=0;a<10;a++)           //Yardýmcý 'a' deðiþkeni ile for döngüsünü kullanýlarak kullanýcý tarafýndan girilen ürün bilgileri ekrana yazdýrýlmýþtýr.
    {
    cout<<a+1<<". ÜRÜNÜN BÝLGÝLERÝ "<<endl<<endl
    	     <<"ÝPLÝK TÝPÝ=     "<<mobilya[a].kaplama.ipliktipi<<endl 
    	     <<"AÐIRLIÐI=       "<<mobilya[a].kaplama.agirlik<<endl
             <<"DOKUMA TÝPÝ=    "<<mobilya[a].kaplama.doktipi<<endl
    	     <<"RENGÝ=          "<<mobilya[a].kaplama.renk<<endl
    	     <<"MÝKTARI=        "<<mobilya[a].kaplama.miktar<<endl
    	     <<"MALZEME=        "<<mobilya[a].malzeme.malzeme<<endl
    	     <<"BÝRLEÞTÝRME=    "<<mobilya[a].malzeme.birlestirme<<endl
    	     <<"TARZ=           "<<mobilya[a].malzeme.tarz<<endl
    	     <<"ENÝ(m)=         "<<mobilya[a].malzeme.boyuten<<endl
    	     <<"BOYU(m)=        "<<mobilya[a].malzeme.boyutboy<<endl
    	     <<"YÜKSEKLÝÐÝ(m)=  "<<mobilya[a].malzeme.boyutyukseklik<<endl
             <<"MÝKTARI=        "<<mobilya[a].malzeme.miktar<<endl<<endl;
	}
    	
	system("pause");
	return 0;
}
