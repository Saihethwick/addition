#include<iostream>
class count
{
	int value;
		public:
			count():value(5)
			void operator ++()
			{
				++ value;
			}
			void display
			{
				std::cout<<value;
			}
};
int main()
{
	count count1;
	++ count1;
	count1.display();
	return 0;
}