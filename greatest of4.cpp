#include<iostream>
int main()
{
	int a,b,c,d;
	a=5;
	b=6;
	c=7;
	d=8;
	if(a>b&&a>c&&a>d)
	{
		std::cout<<"a is greatest value";
	}
	else if(b>a&&b>c&&b>d)
	{
		std::cout<<"b is greatest value";
	}
	else if(c>a&&c>b&&c>d)
	{
		std::cout<<"c is greatest value";
	}
	else
	{
		std::cout<<"d is greatest value";
	}
	return 0;
}