#include<iostream>
#define PI 3.14159      //Sabit tanýmlama böyle oluyor.

using namespace std;

int main()                              //NOT:  Ýkisinden birinin seçilmesi gerekli.
 {
 	float rad;
 	const float PI =3.1415 F;     //Sabit tanýmlama 2. þekli.
 	
 	cout<<"CEMBERIN CAPI GIRINIZ= " ;
 	cin>>rad;
 	
 	float alan=PI*rad*rad;
 	 cout<<"CEMBERIN ALANI= "<<alan<<endl;
 	 
 	 system("pause");
 	 return 0;
 	 
 }
