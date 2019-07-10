/*
Exercise One
Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to
enter a number of gallons, and then displays the equivalent in cubic feet.
*/
#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;
int main(){
	int gallons; double cubic_feet;
	cout<<"Enter number of gallons :"<<endl;
	cin>>gallons;
	cubic_feet = 7.481 * gallons;
	cout<<"The equivalent cubic feet is "<<cubic_feet<<endl;
	
	
	
	
	/*
	Exercise Two
	Write a program that generates the following table:
1990 	135
1991   7290
1992  11300
1993  16200
Use a single cout statement for all output.
*/
int year = 1993;
cout<<setw(4)<<year<<setw(8)<<"135"<<endl
	<<setw(4)<<year--<<setw(8)<<"7190"<<endl
	<<setw(4)<<year--<<setw(8)<<"11300"<<endl
	<<setw(4)<<year--<<setw(8)<<"16200"<<endl;

	
	system("pause");
	return 0;
}
