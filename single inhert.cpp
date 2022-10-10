#include<iostream>
using namespace std;
class college
{
	public:
		void a()
		{
			cout<<"a";
		}
};
class sem: public college
{
	public:
		void b()
		{
			cout<<"b";
		}
};
int main()
{
	sem obj;
	obj.b();
	obj.a();
	return 0;
}
