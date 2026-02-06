#include<iostream>
using namespace std;
int main()
{
	int a[3][3]={{1,2,3},{3,2,1},{5,4,3}};
	int i,j;
	cout<<"print the matrix elements\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<ends;	
		}
		cout<<endl;
	}
	return 0;
	
	
}
