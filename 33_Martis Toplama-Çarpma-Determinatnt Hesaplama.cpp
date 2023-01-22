#include<iostream>
#include<locale.h>
#include<math.h>

/* Matris Topla-Çarp-Determinat Hessaplama
Soru:
3X3 boyutlarındaki klavyeden elemanları girilen A ve B matrisleri arasında 
C=A+B, C=AxB ve detA hesaplayıp sonuçları anlaşılır bir görsellikte ekrana yazan programı yazınız. 
*/
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int d1[9];
	int d2[9];
	
	int k;
	
	int A[8]={8,7,6,5,4,3,2,1};
	
	int max=A[0];
	int min=A[0];
	int adim=0;
	
	for(int i=0;i<=7;i++){
		if(A[i]<min)
		min=A[i];
		
		if(A[i]>max)
		max=A[i];
		adim++;
		
	}
	cout<<"sonuc= "<<max-min<<endl;
	cout<<"adım= "<<adim<<endl;
	
	
	
	cout<<"  1.MATRİSİN İLK  SÜTUNUNU YUKARDAN AŞAĞI YAZINIZ: "<<endl;
	for(k=0;k<3;k++)
	cin>>d1[k];
	
	
	cout<<"  1.MATRİSİN İKİNCİ SÜTUNUNU YUKARDAN AĞAŞI YAZINIZ: "<<endl;
	for(k=3;k<6;k++)
	cin>>d1[k];
	
	
		
	cout<<"  1.MATRİSİN ÜÇÜNCÜ SÜTUNUNU YUKARDAN AŞAĞI YAZINIZ: "<<endl;
	for(k=6;k<9;k++)
	cin>>d1[k];
	
	cout<<" ----------------------------------------------------"<<endl;
	
	int m;
	
	cout<<"  2.MATRİSİN İLK SÜTUNUNU YUKARDAN AŞAĞI YAZINIZ: "<<endl;
	for(m=0;m<3;m++)
	cin>>d2[m];
	
	
	cout<<"  2.MATRİSİN İKİNCİ SÜTUNUNU YUKARDAN AŞAĞI YAZINIZ: "<<endl;
	for(m=3;m<6;m++)
	cin>>d2[m];
	
	
	cout<<"  2.MATRİSİN ÜÇÜNCÜ SÜTUNUNU YUKARDAN AŞAĞI YAZINIZ: "<<endl;;
	for(m=6;m<9;m++)
	cin>>d2[m];
	
	cout<<" ----------------------------------------------------"<<endl;
	
	cout<<"     TOPLAMLARI: "<<endl;
	cout<<d1[0]+d2[0]<<"  "<<d1[3]+d2[3]<<"  "<<d1[6]+d2[6]<<endl;
	cout<<d1[1]+d2[1]<<"  "<<d1[4]+d2[4]<<"  "<<d1[7]+d2[7]<<endl;
	cout<<d1[2]+d2[2]<<"  "<<d1[5]+d2[5]<<"  "<<d1[8]+d2[8]<<endl;
	
	cout<<" ----------------------------------------------------"<<endl;
	
	cout<<"     ÇARPIMLARI:"<<endl;
	cout<<d1[0]*d2[0]+d1[3]*d2[1]+d1[6]*d2[2]<<"  "<<d1[0]*d2[3]+d1[3]*d2[4]+d1[6]*d2[5]<<"  "<<d1[0]*d2[6]+d1[3]*d2[7]+d1[6]*d2[8]<<endl;
	cout<<d1[1]*d2[0]+d1[4]*d2[1]+d1[7]*d2[2]<<"  "<<d1[1]*d2[3]+d1[4]*d2[4]+d1[7]*d2[5]<<"  "<<d1[1]*d2[6]+d1[4]*d2[7]+d1[7]*d2[8]<<endl;
	cout<<d1[2]*d2[0]+d1[5]*d2[1]+d1[8]*d2[2]<<"  "<<d1[2]*d2[3]+d1[5]*d2[4]+d1[8]*d2[5]<<"  "<<d1[2]*d2[6]+d1[5]*d2[7]+d1[8]*d2[8]<<endl;
	
	cout<<" ----------------------------------------------------"<<endl;
	
	cout<<"     BİRİNCİ MATRİSİN det DEĞERİ = ";
	cout<<(d1[0]*d1[4]*d1[8]+d1[3]*d1[7]*d1[2]+d1[6]*d1[1]*d1[3])-(d1[2]*d1[4]*d1[6]+d1[5]*d1[7]*d1[0]+d1[8]*d1[1]*d1[3])<<endl;
	
	cout<<" ----------------------------------------------------"<<endl;
	
	cout<<"     İKİNCİ MATRİSİN det DEĞERİ= ";
	cout<<(d2[0]*d2[4]*d2[8]+d2[3]*d2[7]*d2[2]+d2[6]*d2[1]*d2[3])-d2[2]*d2[4]*d2[6]-d2[5]*d2[7]*d2[0]-d2[8]*d2[1]*d2[3]<<endl;
	
	cout<<" ----------------------------------------------------"<<endl;
	
	system("pause");
	return 0;
}
