#include<iostream>
int main()
{
	int a[100],i,n,j,k;
	std::cout<<"enter the number of elements";
	std::cin>>n;
	std::cout<<"enter the numbers";
	for(i=0;i<n;i++)
	{
		std::cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		std::cout<<a[0]<<"\n";
		std::cout<<a[n-1];
		break;
	}
}