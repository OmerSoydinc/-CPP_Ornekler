#include<iostream>
#include<locale.h>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{ 

float a;
float b;
int s=1;

while(s){
	cout<<"x1= ";
cin>>a;

cout<<"x2= ";
cin>>b;

float sonuc=a*a-(a*b)+b*b+2*a+4*b+3;

cout<<"sonuç = "<<sonuc<<endl;

cout<<"seçim ";
cin>>s;
	
}


system("pause");
return 0;
}
