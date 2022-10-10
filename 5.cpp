#include<iostream>
using namespace std;
class students
{
	public:
		void student()
		{
			cout<<"students";
		}
};
class fee:public students
{
	public:
		void fees()
		{
			cout<<"1000"<<endl;
		}
};
class account_numbers:public students
{
	public:
		void account_number()
		{
			cout<<"1"<<endl;
		}
};
class bank
{
	public:
		void bank()
		{
			cout<<"bank"
		}
};
class account_number:public bank
{
	public:
		void account_number()
		{
			cout<<"1"<<endl;
		}
};
class paid amount:public bank
{
	public:
		void paid_amount()
		{
			cout<<"1000"<<endl;
		}
};
int main(){
	fee o1;
	account_numbers o2;
	paid_amount o3;
	o1.fees;
	o1.student;
}

