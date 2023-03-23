#include<iostream>
using namespace std;
int main()
{
	int n,fact=1;
	cout<<"Enter number to calculate for factorial: ";
	cin>>n;
	for(int i=1;i<=n;i++)
		fact*=i;
	cout<<"The factorial of "<<n<<" is : "<<fact<<endl;

    return 0;
}

