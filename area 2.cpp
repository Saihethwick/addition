#include<iostream>
class area
{
	public:
		rectangle(int l,int b)
		{
			std::cout<<"the area of rectangle"<<l*b<<"\n";
		}
		square(int s)
		{
			std::cout<<"the area of square"<<s*s<<"\n";
		}
	
};
int main()
{
	area obj;
	obj.rectangle(5,7);
	obj.square(4);
}