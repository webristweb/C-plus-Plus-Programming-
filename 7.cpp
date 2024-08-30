#include<iostream>
void demofunction()
{
	int nonstaticvar= 0;
	static int staticvar= 0;
	nonstaticvar++;
	staticvar++;
	std::cout<<"non static variable:"<<nonstaticvar<<std::endl;
	std::cout<<"static variable:"<<staticvar<<std::endl;
}
int main()
{
	std::cout<<"first call to demofunction :"<<std::endl;
	demofunction();
	std::cout<<"\nsecond call to demofunction:"<<std::endl;
	demofunction();
	return 0;
}
