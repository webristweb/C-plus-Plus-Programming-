#include<iostream>
using namespace std;
class counting
{
	public:
		int obj1,obj2,sum;
		counting ();
		~counting ();
};
counting :: counting()
{
	cout<<"object of counting class constructed";
}
counting:: ~counting()
{
	cout<<"object instance remove with destructor";
}
int main()
{
	counting c;
	c.obj1=4;
	c.obj2=5;
	c.sum= c.obj1+c.obj2;
	cout<<"add two no.:"<<c.sum <<endl;
	return 0;
}
