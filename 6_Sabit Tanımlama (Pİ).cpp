#include<iostream>
#define PI 3.14159      //Sabit tan�mlama b�yle oluyor.

using namespace std;

int main()                              //NOT:  �kisinden birinin se�ilmesi gerekli.
 {
 	float rad;
 	const float PI =3.1415 F;     //Sabit tan�mlama 2. �ekli.
 	
 	cout<<"CEMBERIN CAPI GIRINIZ= " ;
 	cin>>rad;
 	
 	float alan=PI*rad*rad;
 	 cout<<"CEMBERIN ALANI= "<<alan<<endl;
 	 
 	 system("pause");
 	 return 0;
 	 
 }
