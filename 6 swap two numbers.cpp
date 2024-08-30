// program to swap two numbers  program:-6 LAB ON C++

#include <iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout <<"Enter 2 integers a and b";
	cin >>a>>b;
	cout <<"Before Swapping" <<endl;
	cout <<"a=" <<"b=" <<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout <<"\n After Swapping" <<endl;
	cout <<"a=" <<"b=" <<b<<endl;
	return 0;
	
}