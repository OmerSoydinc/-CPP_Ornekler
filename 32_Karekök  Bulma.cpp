#include<iostream>
#include<cmath>              //BU KÜTÜPHANE AÇILMAZSA KAREKÖK BULMA YAPILAMAZ!!!!!!   
using namespace std;
int main()
{
	
	double  number , answer;
	
	cout<<"Sayiyi giriniz= " ;
	cin >> number;
	
	answer = sqrt ( number ) ;                      //sgrt(number) =  kök bulmaya yarar ama kütüphane açmaya dikkat et!!!!!!!!!!!
	
	cout<<"Karekoku= "<< answer<<endl;
	
	
	
	system("pause");
	return 0;
}

