// To asign data to member of structure variable and display it.
#include <iostream>               // Program:- 2A LAB ON C++
using namespace std;
struct person
{
	char name, desi;
	int age;
	float salary;
};
int main()
{
	person p1;
	cout << "Enter full name: ";
	cin >> p1.name;
	
	cout << "Enter age: ";
	cin >> p1.name;
	
	cout << "Enter the designation: ";
	cin >> p1.desi;	
	cout << "Enter salary";
	cin >> p1.salary;
	
	cout <<"\n Display Information" <<endl;
	cout <<" name: " << p1.name <<endl;
	cout <<"Age: " << p1.age <<endl;
	cout <<"Designation: " << p1.desi <<endl;
	cout <<"Salary: " << p1.salary;
	return 0;
}