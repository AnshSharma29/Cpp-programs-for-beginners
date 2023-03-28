#include<iostream>
using namespace std;
int main()
{
	int n,r,d=0,t;
	cout<<"Enter the three digit number to check for armstrong: ";
	cin>>n;
	t=n;
	while(n!=0)
	{
		r=n%10;
		d+=r*r*r;
		n=n/10;
	}
	if(t==d)
		cout<<t<<" is an Armstrong number."<<endl;
	else
		cout<<t<<" is not an Armstrong number."<<endl;
    cout<<"Name: Ansh Sharma"<<endl<<"Enrollment no: 07829802021"<<endl;
    return 0;

}

