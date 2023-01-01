#include<iostream>
#include<iomanip>      //Gerekli olan kütüphane
using namespace std;
int main()
{
	long pop1=2425785, pop2=47, pop3=9761;

	
	cout << "LOCATION " << "POP" << endl;
	cout << "PORTCITY " << pop1 << endl;
	cout << "HIGHTOWN " << pop2 << endl;
	cout << "LOWVILLE " << pop3 << endl<<endl;
	
	cout << setw(8) << "LOCATION" << setw(12) << "POP." << endl;
	cout << setw(8) << "PORTCITY" << setw(12) << pop1 << endl;
	cout << setw(8) << "HIGHTOWN" << setw(12) << pop2 << endl;
	cout << setw(8) << "LOWVILLE" << setw(12) << pop3 << endl;

	system("pause");
	return 0;	
}
