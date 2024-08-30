#include<stdio.h>
int main ()

{
	
	printf("hello world");
	return 0;
}.

#include <iostream>
using namespace std;
int main ()
{
	int var = 10;
	int *p1, *p2;
	p1 = p2 =& var;
	cout << "p1 : " << p2 <<"\n";
	p1 = p1+2;
	cout <<"\n.p2:\n";
	p2 = p2-2;
	cout << p2 << "\n";
	return 0;
	
}