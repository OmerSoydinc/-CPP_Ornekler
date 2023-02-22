#include<iostream>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

void sayiuret(int sayi1,int sayi2,int sayi3[50]);   //Sayiuret adýnda 3 parametreli  bir fonksiyon tanýmlanmýþtýr.

int main()
{
	setlocale(LC_ALL,"Turkish");                   //Türkçe karakterler aktif hale getirilmiþtir.
	
	int sayi1,sayi2;                               //sayi1 ve sayi2 adýnda 2 adet üretilecek sayýlar sayý int tipinde tanýmlanmýþtýr.
	int sayi3[50];                                 //sayi3 adýnda 50 kapasiteli bir dizi tanýmlanmýþtýr.(Üretilecek 50 sayý için.)
	
	sayiuret(sayi1,sayi2,sayi3);
	
    system ("pause");
    return 0;	
}
void sayiuret(int sayi1,int sayi2 ,int sayi3[50])    //Sayiuret fonksiyonu aþaðýdaki gibi kodlanmýþtýr. 
{
	int yas,k;
	
	srand(time(NULL));
	
	sayi1=rand();                                             //1.Sayý rastgele üretilmiþtir.
	sayi2=rand();                                             //2.Sayý rastgele üretilmiþtir.
	
	cout<<"Arasýnda 50 adet sayý üretilcek sayýlar.."<<endl;
	cout<<"1.SAYI= "<<sayi1<<endl;
	cout<<"2.SAYI= "<<sayi2<<endl;                                       //Arasýnda sayý üretilecek iki sayý ekrana yazdýrýlmýþtýr.
	
	cout<<endl;
	
	if(sayi1>sayi2){                                                     //Arasýnda sayý üretilecek 1.Sayý büyük ise yapýlacak iþlemler.
		for( k=0;k<50;k++)
		{
			yas=rand()%(sayi1-sayi2+1)+sayi2;
		    sayi3[k]=yas;                                                //Üretilen sayýlar sýrayla dizi içerisine entegre edilmiþtir. 
	    }
		for(k=0;k<50;k++)
	    cout<<setw(2)<<k+1<<". sayý= "<<setw(6)<<sayi3[k]<<endl;         //Üretilen sayýlar ekrana yazdýrýlmýþtýr.
	}else 
	
	 if(sayi2>sayi1){                                                    //Arasýnda sayý üretilecek 2.Sayý büyük ise yapýlacak iþlemler.
	 	for( k=0;k<50;k++)
		{
			yas=rand()%(sayi2-sayi1+1)+sayi1;
		    sayi3[k]=yas;                                                //Üretilen sayýlar sýrayla dizi içerisine entegre edilmiþtir. 
	    }
		for(k=0;k<50;k++)
	    cout<<setw(2)<<k+1<<". sayý= "<<setw(6)<<sayi3[k]<<endl;         //Üretilen sayýlar ekrana yazdýrýlmýþtýr.
	}
}

