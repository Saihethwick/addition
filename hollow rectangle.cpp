#include<iostream>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(i==1 || i==4  j==1|| j==7)
			{
				std::cout<<"*";
			}
			else
			{
				std::cout<<" ";
			}
		}
		std::cout<<"\n";
	}
	return 0;
}