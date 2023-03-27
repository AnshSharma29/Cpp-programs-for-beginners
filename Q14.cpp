#include<iostream>
using namespace std;
int main()
{
	int n,n1=0,n2=1,next;
	cout<<"Enter the number of terms upto which you want to display the fibonacci series: ";
	cin>>n;
	cout<<n1<<" "<<n2<<" ";
	for(int i=3;i<=n;i++)
	{
		next=n1+n2;
		cout<<next<<" ";
		n1=n2;
		n2=next;	
	} 
    cout<<"\nName: Ansh Sharma"<<endl<<"Enrollment no: 07829802021"<<endl;
    return 0;

}

