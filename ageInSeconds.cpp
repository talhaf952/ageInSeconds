#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter Your age in year: ";
	cin>>age;
	double totalAge=age*365*24*60*60;
	//365 days, 24 hours, 6o minutes, 60 seconds.
	cout<<"Your age in seconds is "<<totalAge;
}
