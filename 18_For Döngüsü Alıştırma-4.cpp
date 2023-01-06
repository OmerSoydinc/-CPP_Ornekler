#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int j,alpha;
	for( j=0,alpha=100; j<50;   j++ ,  alpha--)
    cout<<j<<"   "<<alpha<<endl;	
	system("pause");
	return 0;
}
