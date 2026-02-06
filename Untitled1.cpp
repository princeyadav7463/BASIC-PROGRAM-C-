#include<iostream>
using namespace std;
int main()
{
	int i=1,n,sum=0;
	cout<<"Enter any number=";
	cin>>n;
	while(i<=n)
	{
			sum=i*i;
		i++;
	}
	cout<<"sum of series ="<<sum;
	return 0;
}
