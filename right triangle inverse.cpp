#include<iostream>
int main()
{
	int i,j,r;
	std::cout<<"enter number of rows";
	std::cin>>r;
	for(i=1;i<=r;i++)
	{
		for(j=i;j<=r;j++)
		{
			std::cout<<i;
		}
		std::cout<<"\n";
	}
	return 0;
}



#include<iostream>
int main()
{
	int i,j,r;
	std::cout<<"enter number of rows";
	std::cin>>r;
	for(i=r;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			std::cout<<"*";
		}
		std::cout<<"\n";
	}
	return 0;
}