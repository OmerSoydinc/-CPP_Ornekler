#include<iostream>
#include<locale.h>
#include<conio.h>


using namespace std;
#define getmax(a,b) ((a)>(b) ? (a):(b))
#define ortalamaal(v1,v2) ((v1+v2)/2)

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int x=5,y;
	y= getmax (x,2);  //x mi büyük 2 mi ---> büyük olani y ye ata
	cout<<y<<endl;
	cout<<getmax(7,x)<<endl;   //7 mi büyük 2xmi ---> büyük olani alir ve ekrana yazar
	
	//------------------------------------------
	
	int v1=10 ,v2=20 ,sonuc;
	
	sonuc=ortalamaal(v1,v2);    //   (v1+v2)/2  islemini yapar
	cout<<sonuc<<endl;
	
	cout<<ortalamaal(50,6)<<endl;	
	system("pause");
	return 0;	
}

