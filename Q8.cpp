#include<iostream> 
using namespace std;


int main()
{

	int a,c,b,choice,value;
	c=1;

	while(c){
		cout<<"Enter the values of two operands: ";
		cin>>a>>b;

		cout<<endl<<"Enter operant (+,-,*,/,%) you want to perform between operands:"<<endl;
		cout<<"Press 1 for Addition"<<endl;
		cout<<"Press 2 for Multiplication"<<endl;
		cout<<"Press 3 for Division"<<endl;
		cout<<"Press 4 for Remainder"<<endl;
		cout<<"Press 5 for Subtraction"<<endl;
		cout<<"Press 6 for Exit"<<endl;
		cin>>choice;

		switch(choice)
		{

			case 1:
				cout<<"The addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
				break;

			case 2:
				cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
				break;

			case 3:
				cout<<"The division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
				break;	

			case 4:
				cout<<"The remainder of "<<a<<" and "<<b<<" is "<<a%b<<endl;
				break;

			case 5:
				cout<<"The substraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
				break;
			case 6:
				c=0;
				break;
		}
	}

 
    return 0;
}

