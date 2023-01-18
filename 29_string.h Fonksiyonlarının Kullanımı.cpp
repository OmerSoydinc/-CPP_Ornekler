#include<iostream>
#include<locale.h>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
	string cumle="BILGI nýn beste dordu ILGI dýr";
	int n;
	n=cumle.find("ILGI");
	cout<<"ILGININ bulundugu karakter sirasi= "<<n<<endl;
	
	n=cumle.find_first_of("spde");
	cout<<"spde nin bulundugu karakter sirasi= "<<n<<endl<<endl<<endl;
	
	//-----------------------------------------------------------------
	
	string s1("ey oðul! agac yas iken egilir.");
	string s2("genc");
	string s3("unutma!");
	
	s1.erase(0,9);
	cout<<s1<<endl;
	
	s1.replace(5,3,s2);
	cout<<s1<<endl;
	
	s1.insert(0,s3);
	cout<<s1<<endl;
	
	s1.erase(s1.size()-1,1);
	cout<<s1<<endl;
	
	s1.append(3, '!');
	cout<<s1<<endl;

	int x=s1.find(" ");
	while(x<s1.size() )
	{
		s1.replace(x,1,"/");
		x=s1.find(" ");
	 } 
	cout<<"s1: "<<s1<<endl<<endl;
	
	//------------------------------------------------------------------
	
	string ad,soyad,isim;
	cout<<"adinizi giriniz= ";cin>>ad;
	
	cout<<"soyadinizi giriniz= ";cin>>soyad;
	
	char a=getch();
	isim=ad+soyad+a;
	cout<<"\n isminiz "<<isim<<endl;
	
	//------------------------------------------------------------------
	
	string kelime1,kelime2;
	
	cout<<"birinci kelimeyi gir: ";cin>>kelime1;
	cout<<"ikinci kelimeyi gir: ";cin>>kelime2;
	
	if(kelime1>kelime2)
	cout<<kelime1<<"  "<<kelime2<<" den buyuktur."<<endl;
	else
	cout<<kelime1<<"  "<<kelime2<<"  den kucuktur."<<endl;
	
	//------------------------------------------------------------------
	
	string sifre("teknoloji");
	string giris;
	
	cout<<"sifreyi giriniz= ";
	cin>>giris;
	
	if(sifre.compare(giris) !=0 ) 
	cout<<giris<<" dogru sifre degil... "<<endl;
	else cout<<"girisiniz onnaylandi..."<<endl;
	
	if(sifre.compare(4,3,"olo") ==0 );
	cout<<" 5-7. karakterleri 'olo' "<<endl;
	
	
	system("pause");
	return 0;
}
