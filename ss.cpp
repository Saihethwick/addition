#include<iostream>
using namespace std;
int main(){
	try
	{
		int a,b,c;
		a=5;
		b=0;
		c=a/b;
	}
	catch(int mynum)
	{
		cout<<mynum;
	}
}
