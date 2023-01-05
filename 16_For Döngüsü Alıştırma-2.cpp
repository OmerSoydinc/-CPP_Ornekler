#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int numb;
	
	for (numb=1 ; numb<=10 ; numb++)
	{
		cout<<numb<<"  "<<"----->";
		int cube=numb*numb*numb;
		cout<<cube<<endl;
	}
	
	system("pause");
	return 0;
}

