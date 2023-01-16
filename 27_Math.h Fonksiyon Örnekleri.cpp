#include<iostream>
#include<locale.h>
#include<math.h>
#define PI 3.14159265

using namespace std;
int main()
{
	
	double param,result;
	param=60.0;
	result=cos(param*PI/180);
	cout<<"COSINUS "<<param<<" DEGERI "<<result<<"\n ";
	
	
	param=5.0;
	result=exp(param);
	cout<<"The expontial value of "<<param<<" is "<<result<<"\n";
	
	param=5.5;
	result=log(param);
	cout<<"log("<<param<<")="<<result<<"\n";
	
	cout<<"7^3"<< pow (7.0 , 3.0) <<"\n";
	
	cout<<"|-10|= "<<abs(-10)<<"\n";
	
	system("pause");
	return 0;
	
	 
	}
