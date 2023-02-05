#include<iostream>
#include<locale.h>
#include<iomanip>
using namespace std;

void matrisegir(int mat1[]);
void matrisegir(int mat2[]);

void matristopla(int mat1[], int mat2[]);

int main()
{
	setlocale(LC_ALL,"Turkish");
	int mat1[9];
	int mat2[9];
	int k;
	
	matrisegir(mat1);
	
	matrisegir(mat2);
	
	matristopla(mat1,mat2);       


	    
	system("pause");
	return 0;
}
void matrisegir(int mat1[9])
{
	int k;
	
	cout<<"MATRÝSÝN ÝLK  SÜTUNUNU YUKARDAN AÞAÐI YAZINIZ: "<<endl;
	for(k=0;k<3;k++)
	cin>>mat1[k];
	
	
	cout<<"MATRÝSÝN ÝKÝNCÝ SÜTUNUNU YUKARDAN AÞAÐI YAZINIZ: "<<endl;
	for(k=3;k<6;k++)
	cin>>mat1[k];
	
	
		
	cout<<"MATRÝSÝN ÜÇÜNCÜ SÜTUNUNU YUKARDAN AÞAÐI YAZINIZ: "<<endl;
	for(k=6;k<9;k++)
	cin>>mat1[k];
	
	cout<<endl<<endl;
	cout<<"     GÝRÝLEN  MATRÝS"<<endl<<endl;
	cout<<setw(10)<<"|"<<mat1[0]<<" "<<mat1[3]<<" "<<mat1[6]<<"|"<<endl
	    <<setw(10)<<"|"<<mat1[1]<<" "<<mat1[4]<<" "<<mat1[7]<<"|"<<endl
	    <<setw(10)<<"|"<<mat1[2]<<" "<<mat1[5]<<" "<<mat1[8]<<"|"<<endl<<endl;
	
}
/*void matrisegir(int mat2[9])
{
	
	int k;
	
	cout<<"MATRÝSÝN ÝLK  SÜTUNUNU YUKARDAN AÞAÐI YAZINIZ: "<<endl;
	for(k=0;k<3;k++)
	cin>>mat2[k];
	
	
	cout<<"MATRÝSÝN ÝKÝNCÝ SÜTUNUNU YUKARDAN AÞAÐI YAZINIZ: "<<endl;
	for(k=3;k<6;k++)
	cin>>mat2[k];
	
	
		
	cout<<"MATRÝSÝN ÜÇÜNCÜ SÜTUNUNU YUKARDAN AÞAÐI YAZINIZ: "<<endl;
	for(k=6;k<9;k++)
	cin>>mat2[k];
	
	cout<<endl<<endl;
	cout<<"     GÝRÝLEN  MATRÝS"<<endl<<endl;
	cout<<setw(10)<<"|"<<mat2[0]<<" "<<mat2[3]<<" "<<mat2[6]<<"|"<<endl
	    <<setw(10)<<"|"<<mat2[1]<<" "<<mat2[4]<<" "<<mat2[7]<<"|"<<endl
	    <<setw(10)<<"|"<<mat2[2]<<" "<<mat2[5]<<" "<<mat2[8]<<"|"<<endl<<endl;
	
}*/
void matristopla(int mat1[], int mat2[], int mat[]) 
{
	cout<<"     Girdiðiniz 2 Matrisin Toplamý "<<endl;
	cout<<setw(10)<<"|"<<mat1[0]+mat2[0]<<" "<<mat1[3]+mat2[3]<<" "<<mat1[6]+mat2[6]<<"|"<<endl
	    <<setw(10)<<"|"<<mat1[1]+mat2[1]<<" "<<mat1[4]+mat2[4]<<" "<<mat1[7]+mat2[7]<<"|"<<endl
	    <<setw(10)<<"|"<<mat1[2]+mat2[2]<<" "<<mat1[5]+mat2[5]<<" "<<mat1[8]+mat2[8]<<"|"<<endl;
	
}
