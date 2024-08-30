// Write a program to implement the increment and decrement of a pointer

#include <iostream>
using namespace std;
int main ()
{
	int var = 10;
	int *p;
	p = &var;
	cout <<"p before increment:<<p<<\n";
	p++;
	cout <<"p after increment: <<p<<\n";
	cout <<"p before decrementing:"<<p<<"\n";
	p--;
	cout <<"p after decrementing:" <<p <<"\n";
}