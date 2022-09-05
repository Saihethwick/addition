#include<iostream>
int main()
{
	int a,b,c;
	a=8;
	b=10;
	c=11;
	if(a>b && a>c)
	{
		std::cout<<"a is greater";
	}
	else if(b>a && b>c)
	{
		std::cout<<"b is greater";
	}
	else
	{
		std::cout<<"c is greater";
	}
	return 0;
}