#include<iostream>
#include<process.h>
using namespace std;
 int main()
 {
 	setlocale(LC_ALL, "Turkish");
 	
 	unsigned long n,j;
	 
	cout<<"BIR SAYI GIRINIZ= ";cin>>n;
	 
	for(j=2;j<=n/2;j++)
	if (n%j==0)
	   {
		cout<<"BU SAYI ASAL DEGIL; BOLUNDUGU SAYI:"<<j<<endl;
		system("pause");
		exit(0);
		}
	cout<<"BU SAYI ASAL \n ";
	
	system("pause");
	return 0;  
 }
