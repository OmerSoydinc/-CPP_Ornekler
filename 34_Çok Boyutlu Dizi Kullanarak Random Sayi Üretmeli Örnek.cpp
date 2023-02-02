#include<iostream>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

/*
Bir işletmenin son 5 yıllık her aya ait ciro miktarları (100-5000 arasında) veri olarak bulunmaktadır. 
Bu veriler üzerinde aşağıdaki hesaplamaları yaptıran programı yazın;
Bu verileri "ciro" adında uygun bir dizi yapısına giriniz (veya 100-5000 arasında rastgele üretiniz)
Yıllık ortalama ciroları ayrı ayrı hesaplayarak, ayrı bir "ortciro" adında uygun bir dizi yapısına atayınız
Klavyeden girilen yılın (yıl sırasına göre 1.yıl, 2.yıl vs.) ortalamasından yüksek olan ayların ay sırası ve cirolarını ekrana yazan
Klavyeden girilen yılın (yıl sırasına göre 1.yıl, 2.yıl vs.) her çeyreğinin (1-2-3.aylar ilk çeyrek vs.) ortalamasını hesaplayıp ekrana yazan
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
		cout<<y+1<<".YILIN  "<<a+1<<". AYININ CİROSU= "<<ciro[y][a]%4901+100<<endl;      
		
	}	
	cout<<endl;
	
	unsigned short topciro=0;
	
	for(y=0;y<5;y++)
	{
		for(a=0;a<12;a++)
		topciro=topciro+ciro[y][a]%4901+100;
		cout<<y+1<<". YILIN ORTALAMA CİROSU : "<<topciro/12<<endl;       
	
	}
	cout<<endl;
	//-----------------------------------------------------
		int z;
	cout<<"İSTEDİĞİNİZ YILI GİRİNİZ= ";
	cin>>z;
	switch(z)
	{
		case 1:
		cout<<"1.yılın birinci çeyreğin ortalama cirosu=  "<<(ciro[0][0]%4901+100+ciro[0][1]%4901+100+ciro[0][2]%4901+100)/3<<endl;
		cout<<"1.yılın ikinci çeyreğin ortalama cirosu=   "<<(ciro[0][3]%4901+100+ciro[0][4]%4901+100+ciro[0][5]%4901+100)/3<<endl;
		cout<<"1.yılın üçüncü çeyreğin ortalama cirosu=   "<<(ciro[0][6]%4901+100+ciro[0][7]%4901+100+ciro[0][8]%4901+100)/3<<endl;
		cout<<"1.yılın dördüncü çeyreğin ortalama cirosu= "<<(ciro[0][9]%4901+100+ciro[0][10]%4901+100+ciro[0][11]%4901+100)/3<<endl;
		break;
	
		case 2:	
		cout<<"2.yılın birinci  çeyreğin ortalama cirosu=  "<<(ciro[1][0]%4901+100+ciro[1][1]%4901+100+ciro[1][2]%4901+100)/3<<endl;
	    	cout<<"2.yılın ikinci   çeyreğin ortalama cirosu=   "<<(ciro[1][3]%4901+100+ciro[1][4]%4901+100+ciro[1][5]%4901+100)/3<<endl;
		cout<<"2.yılın üçüncü   çeyreğin ortalama cirosu=   "<<(ciro[1][6]%4901+100+ciro[1][7]%4901+100+ciro[1][8]%4901+100)/3<<endl;
	    	cout<<"2.yılın dördüncü çeyreğin ortalama cirosu= "<<(ciro[1][9]%4901+100+ciro[1][10]%4901+100+ciro[1][11]%4901+100)/3<<endl;
		break;
			
		case 3:	
		cout<<"3.yılın birinci  çeyreğin ortalama cirosu=  "<<(ciro[2][0]%4901+100+ciro[2][1]%4901+100+ciro[2][2]%4901+100)/3<<endl;
	    	cout<<"3.yılın ikinci   çeyreğin ortalama cirosu=   "<<(ciro[2][3]%4901+100+ciro[2][4]%4901+100+ciro[2][5]%4901+100)/3<<endl;
		cout<<"3.yılın üçüncü   çeyreğin ortalama cirosu=   "<<(ciro[2][6]%4901+100+ciro[2][7]%4901+100+ciro[2][8]%4901+100)/3<<endl;
		cout<<"3.yılın dördüncü çeyreğin ortalama cirosu= "<<(ciro[2][9]%4901+100+ciro[2][10]%4901+100+ciro[2][11]%4901+100)/3<<endl;
		break;	
		
		case 4:	
		cout<<"4.yılın birinci  çeyreğin ortalama cirosu=  "<<(ciro[3][0]%4901+100+ciro[3][1]%4901+100+ciro[3][2]%4901+100)/3<<endl;
	    	cout<<"4.yılın ikinci   çeyreğin ortalama cirosu=   "<<(ciro[3][3]%4901+100+ciro[3][4]%4901+100+ciro[3][5]%4901+100)/3<<endl;
		cout<<"4.yılın üçüncü   çeyreğin ortalama cirosu=   "<<(ciro[3][6]%4901+100+ciro[3][7]%4901+100+ciro[3][8]%4901+100)/3<<endl;
	    	cout<<"4.yılın dördüncü çeyreğin ortalama cirosu= "<<(ciro[3][9]%4901+100+ciro[3][10]%4901+100+ciro[3][11]%4901+100)/3<<endl;
		break;
		
		case 5:	
		cout<<"5.yılın birinci  çeyreğin ortalama cirosu=  "<<(ciro[4][0]%4901+100+ciro[4][1]%4901+100+ciro[4][2]%4901+100)/3<<endl;
	    	cout<<"5.yılın ikinci   çeyreğin ortalama cirosu=   "<<(ciro[4][3]%4901+100+ciro[4][4]%4901+100+ciro[4][5]%4901+100)/3<<endl;
		cout<<"5.yılın üçüncü   çeyreğin ortalama cirosu=   "<<(ciro[4][6]%4901+100+ciro[4][7]%4901+100+ciro[4][8]%4901+100)/3<<endl;
	    	cout<<"5.yılın dördüncü çeyreğin ortalama cirosu= "<<(ciro[4][9]%4901+100+ciro[4][10]%4901+100+ciro[4][11]%4901+100)/3<<endl;
		break;
		default:
		cout<<"HATALI GİRİŞ YAPTINIZ... "<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
