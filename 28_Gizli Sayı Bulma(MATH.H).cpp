#include<iostream>
#include<locale.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	int iS,iG;
	
	srand (time(NULL)); 
	
	iS= rand() % 10 + 1 ;
	
	do {
		cout<<"gizli sayiyi tahmin edin (1-10 arasinda): ";
		cin>>iG;
		if(iS<iG) puts("gizli sayi biraz daha kucuk.");
		else if(iS>iG) puts("gizli sayi biraz daha buyuk."); 
	}while(iS!=iG);
	puts("tabrikler gizli sayiyi buldunuz");
	
	system("pause");
	return 0;
}
