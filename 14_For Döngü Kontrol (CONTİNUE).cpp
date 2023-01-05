#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;
int main()
{
	for(int j=0 ; j<10 ; j++)
	{
		cout<< j << " Ali \n " ;
		if(j>6) continue;
		cout <<j << " Veli \n " ;
	}
	
system("pause");
return 0;	
}
