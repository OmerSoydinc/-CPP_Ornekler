#include<iostream>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

/*
2.	Bir iþletmenin son 5 yýllýk her aya ait ciro miktarlarý (100-5000 arasýnda) veri olarak bulunmaktadýr. 
	Bu veriler üzerinde aþaðýdaki hesaplamalarý yaptýran programý yazýn;
 	Bu verileri "ciro" adýnda uygun bir dizi yapýsýna giriniz (veya 100-5000 arasýnda rastgele üretiniz)
 	Yýllýk ortalama cirolarý ayrý ayrý hesaplayarak, ayrý bir "ortciro" adýnda uygun bir dizi yapýsýna atayýnýz
 	Klavyeden girilen yýlýn (yýl sýrasýna göre 1.yýl, 2.yýl vs.) ortalamasýndan yüksek olan aylarýn ay sýrasý ve cirolarýný ekrana yazan
 	Klavyeden girilen yýlýn (yýl sýrasýna göre 1.yýl, 2.yýl vs.) her çeyreðinin (1-2-3.aylar ilk çeyrek vs.) ortalamasýný hesaplayýp ekrana yazan

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
		cout<<y+1<<".YILIN  "<<a+1<<". AYININ CÝROSU= "<<ciro[y][a]%4901+100<<endl;      
		
	}	
	cout<<endl;
	
	unsigned short topciro=0;
	
	for(y=0;y<5;y++)
	{
		for(a=0;a<12;a++)
		topciro=topciro+ciro[y][a]%4901+100;
		cout<<y+1<<". YILIN ORTALAMA CÝROSU : "<<topciro/12<<endl;       
	
	}
	cout<<endl;
	


	
	//-----------------------------------------------------
		int z;
	cout<<"ÝSTEDÝÐÝNÝZ YILI GÝRÝNÝZ= ";
	cin>>z;
	switch(z)
	{
		case 1:
		cout<<"1.yýlýn birinci çeyreðin ortalama cirosu=  "<<(ciro[0][0]%4901+100+ciro[0][1]%4901+100+ciro[0][2]%4901+100)/3<<endl;
		cout<<"1.yýlýn ikinci çeyreðin ortalama cirosu=   "<<(ciro[0][3]%4901+100+ciro[0][4]%4901+100+ciro[0][5]%4901+100)/3<<endl;
		cout<<"1.yýlýn üçüncü çeyreðin ortalama cirosu=   "<<(ciro[0][6]%4901+100+ciro[0][7]%4901+100+ciro[0][8]%4901+100)/3<<endl;
		cout<<"1.yýlýn dördüncü çeyreðin ortalama cirosu= "<<(ciro[0][9]%4901+100+ciro[0][10]%4901+100+ciro[0][11]%4901+100)/3<<endl;
		break;
	
		case 2:	
		cout<<"2.yýlýn birinci  çeyreðin ortalama cirosu=  "<<(ciro[1][0]%4901+100+ciro[1][1]%4901+100+ciro[1][2]%4901+100)/3<<endl;
	    cout<<"2.yýlýn ikinci   çeyreðin ortalama cirosu=   "<<(ciro[1][3]%4901+100+ciro[1][4]%4901+100+ciro[1][5]%4901+100)/3<<endl;
		cout<<"2.yýlýn üçüncü   çeyreðin ortalama cirosu=   "<<(ciro[1][6]%4901+100+ciro[1][7]%4901+100+ciro[1][8]%4901+100)/3<<endl;
	    cout<<"2.yýlýn dördüncü çeyreðin ortalama cirosu= "<<(ciro[1][9]%4901+100+ciro[1][10]%4901+100+ciro[1][11]%4901+100)/3<<endl;
		break;
			
		case 3:	
		cout<<"3.yýlýn birinci  çeyreðin ortalama cirosu=  "<<(ciro[2][0]%4901+100+ciro[2][1]%4901+100+ciro[2][2]%4901+100)/3<<endl;
	    cout<<"3.yýlýn ikinci   çeyreðin ortalama cirosu=   "<<(ciro[2][3]%4901+100+ciro[2][4]%4901+100+ciro[2][5]%4901+100)/3<<endl;
		cout<<"3.yýlýn üçüncü   çeyreðin ortalama cirosu=   "<<(ciro[2][6]%4901+100+ciro[2][7]%4901+100+ciro[2][8]%4901+100)/3<<endl;
	    cout<<"3.yýlýn dördüncü çeyreðin ortalama cirosu= "<<(ciro[2][9]%4901+100+ciro[2][10]%4901+100+ciro[2][11]%4901+100)/3<<endl;
		break;	
		
		case 4:	
		cout<<"4.yýlýn birinci  çeyreðin ortalama cirosu=  "<<(ciro[3][0]%4901+100+ciro[3][1]%4901+100+ciro[3][2]%4901+100)/3<<endl;
	    cout<<"4.yýlýn ikinci   çeyreðin ortalama cirosu=   "<<(ciro[3][3]%4901+100+ciro[3][4]%4901+100+ciro[3][5]%4901+100)/3<<endl;
		cout<<"4.yýlýn üçüncü   çeyreðin ortalama cirosu=   "<<(ciro[3][6]%4901+100+ciro[3][7]%4901+100+ciro[3][8]%4901+100)/3<<endl;
	    cout<<"4.yýlýn dördüncü çeyreðin ortalama cirosu= "<<(ciro[3][9]%4901+100+ciro[3][10]%4901+100+ciro[3][11]%4901+100)/3<<endl;
		break;
		
		case 5:	
		cout<<"5.yýlýn birinci  çeyreðin ortalama cirosu=  "<<(ciro[4][0]%4901+100+ciro[4][1]%4901+100+ciro[4][2]%4901+100)/3<<endl;
	    cout<<"5.yýlýn ikinci   çeyreðin ortalama cirosu=   "<<(ciro[4][3]%4901+100+ciro[4][4]%4901+100+ciro[4][5]%4901+100)/3<<endl;
		cout<<"5.yýlýn üçüncü   çeyreðin ortalama cirosu=   "<<(ciro[4][6]%4901+100+ciro[4][7]%4901+100+ciro[4][8]%4901+100)/3<<endl;
	    cout<<"5.yýlýn dördüncü çeyreðin ortalama cirosu= "<<(ciro[4][9]%4901+100+ciro[4][10]%4901+100+ciro[4][11]%4901+100)/3<<endl;
		break;
		default:
		cout<<"HATALI GÝRÝÞ YAPTINIZ... "<<endl;
	}
	cout<<endl;	
	
	
	
	
	system("pause");
	return 0;
}
