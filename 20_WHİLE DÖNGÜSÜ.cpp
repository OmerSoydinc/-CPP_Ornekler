#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	
	int pow=1;
	int numb=1;
	while(pow<10000)
	{
	 cout <<"  "<< numb ;
	 cout <<"  "<< pow << endl;
	 ++numb;
	 pow=numb*numb*numb*numb;
	}
	
	system("pause");
	return 0;
}
