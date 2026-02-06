#include<iostream>
using namespace std;
int main()
{
	int a[3][3]{{1,2,3,},{4,5,6},{7,8,9}};
	int i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j%2==0])
		{
		sum=sum+a[i][j];
	}
	cout<<sum of ma
	}
	return 0;
	
}
