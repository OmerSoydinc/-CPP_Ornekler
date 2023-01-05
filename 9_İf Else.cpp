#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;
int main()
{
	int sayi1,sayi2,sonuc;
	char oprt;
	
	cout<<"BIR SAYI GIRINIZ= ";
	cin>>sayi1;
	cout<<"BIR SAYI GIRINIZ= ";
	cin>>sayi2;
	cout<<"ISLEM SECINIZ= ";
	oprt=getche();
	cout<<"\n";
	if (oprt=='+'){
	
	   sonuc=sayi1+sayi2;
	}
	else
	
	   if(oprt=='-'){
	   	
	   	  sonuc=sayi1-sayi2;
	   	  
	   }
	   
	    else
	    
	     if(oprt=='*'){
	     	
	        sonuc=sayi1*sayi2;
				
		 }
		 
		 else
		 
		   if(oprt=='/')
		   
	       sonuc=sayi1/sayi2;
	       
	cout<<"ISLEM SONUCU="<<sonuc<<endl;
	   	    
	system("pause");
	return 0;
}
