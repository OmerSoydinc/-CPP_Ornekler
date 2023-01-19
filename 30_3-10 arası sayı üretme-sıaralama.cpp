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
	setlocale(LC_ALL,"Turkish");
	int veri[100];
    int sayi; 
   short enFazla =10, enAz = 3;
   int i;

  srand(time(NULL));

  for(int i = 0; i < 100; i++)
  {
  	sayi=rand() % (enFazla - enAz + 1 ) + enAz;
  	veri[i]=sayi;
  	
  	cout <<i+1<<". Sayý " <<veri[i] << endl;
    
    }
    int c;
    int yedek=0;
    
    for(i=0;i<100;i++)
    {
    	for(c=0;c<100;c++)
    	{
    		if(veri[c]<veri[c+1])
    		{
    			yedek=veri[c];
    			veri[c]=veri[c+1];
    			veri[c+1]=yedek;
    			
			}
		}
	}
     cout<<"---BÜYÜKTEN KÜÇÜÐE---"<<endl;
    for(i=0;i<100;i++)
    {
    	cout<<veri[i]<<endl;
	}
	
	//-----------------------------
	
	for(i=100;i>0;i--)
    {
    	for(c=100;c>0;c--)
    	{
    		if(veri[c]>veri[c-1])
    		{
    			yedek=veri[c];
    			veri[c]=veri[c-1];
    			veri[c-1]=yedek;
    			
			}
		}
	}
     cout<<"---KÜÇÜKTEN BÜYÜÐE---"<<endl;
    for(i=100;i>0;i--)
    {
    	cout<<veri[i]<<endl;
	}
	
	
	
	
	
	
	
     
  system("pause"); 
  return 0;
}
