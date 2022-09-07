#include<iostream>
class base
{
	public:
		a()
		{
			std::cout<<"a";
		}
};
class Derived1:public base
{
	public:
		b()
		{
			std::cout<<"b";
		}
};
class Derived2:public base
{
	public:
		c()
		{
			std::cout<<"c";
		}
};
class Derived3:public base
{
	public:
		d()
		{
			std::cout<<"d";
		}
};
int main()
{
	Derived1 obj;
	Derived2 obj1;
	Derived3 obj2;
	obj.a();
	obj.b();
	obj1.a();
	obj1.c();
	obj2.a();
	obj2.d();
	return 0; 
}