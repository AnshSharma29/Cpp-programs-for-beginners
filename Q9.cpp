

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	a=8;
	b=6;
	b=++a;

	cout<<"For pre-increment : The value of a is "<<a<<" and b is "<< b<<endl;

	a=7;
	b=a++;

	cout<<"For post-increment : The value of a is "<<a<<" and b is "<< b<<endl;
	
	return 0;	
}

