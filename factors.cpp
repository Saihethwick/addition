#include<iostream>
int main()
{
	int n,i;
	std::cout<<"enter the number";
	std::cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			std::cout<<i;
		}
	}
	return 0;
}