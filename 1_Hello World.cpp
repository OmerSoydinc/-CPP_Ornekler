#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	cout<<  "Merhaba,Dünya "  << endl;
	

	system("pause");
	return 0;
	
}
