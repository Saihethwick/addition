#include<iostream>
int main()
{
	int a,b,c,d,e;
	float g,f;
	a=6;
	b=5;
	std::cout<<"enter the choice;1-add,2-sub,3-mul,4-div,5-Module\n";
	std::cin>>c;
	switch(c)
	{
		case 1:
		{
			d=a+b;
			std::cout<<d;
			break;
		}
		case 2:
		{
			d=a-b;
			std::cout<<d;
			break;
		}
		case 3:
		{
			e=a*b;
			std::cout<<e;
			break;
	    }
	    case 4:
	    {
	    	f=a/b;
	    	std::cout<<f;
	    	break;
		}
		case 5:
		{
			g=a%b;
			std::cout<<g;
			break;
		}	
		default:
			std::cout<<"invalid choice";
			break;
	}

	return 0;
}