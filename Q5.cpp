#include<iostream>
using namespace std;
int main()
{
	
	float s,p,r,t;
	cout<<"Enter the value of  Principal, Rate and Time respectively: ";
	cin>>p>>r>>t;
	
	s=0.01*p*r*t;
	cout<<"The Simple Interest is : "<<s<<endl;
    
    return 0;

}

