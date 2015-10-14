#include <iostream>
#include <string>
using namespace std;

int addition(int a, int b)
{
	int sum;
	sum= a+b;
	return sum;
	
}


int main()
{
	int g,h,res;
	cout<<"PLease enter the 2 numbers:";
	cin>>g>>h;
	res= addition(g,h);
	cout<<res;
	
	return 0;
	
}
