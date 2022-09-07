#include<iostream>
int main()
{
	int s;
	std::cout<<"enter the number";
	std::cin>>s;
	if(s%4==0)
	{
		std::cout<<s<<"is leap year";
	}
	else
	{
		std::cout<<s<<"is a not leap year";
	}
	return 0;
	
}