#include<iostream>
int main()
{
	int s,r;
	std::cout<<"enter the rows";
	std::cin>>r;
	for(int i=1,k=0;i<=r;i++,k=0)
	{
		for(s=1;s<=r-i;s++)
		{
			std::cout<<" ";
		}
		while(k!=2*i-1)
		{
			std::cout<<"*";
			k++;
		}
		std::cout<<"\n";
	}
	return 0;
}