#include<iostream>
int main()
{
	int n,r=0,a;
	std::cout<<"enter the number";
	std::cin>>n;
	while(n!=0)
	{
		a=n%10;
		r=r*10+a;
		n=n/10;
	}
	std::cout<<r;
}