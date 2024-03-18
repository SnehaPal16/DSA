#include<iostream>
using namespace std;

void merge_intervals(int a[20][20],int m,int n)
{
	int i,j;
	int b[20][20];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j+1]>a[i+1][j])
			{
				a[i][j+1]=a[i+1][j+1];
			}
			cout<<a[i][j];
		}
		cout<<endl;
	}
	
	/*for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<b[i][j];
		}
		cout<<endl;
	}*/
}

int main()
{
	int m,n=2,i,j;
	cout<<"\nenter number of rows :";
	cin>>m;
	int a[20][20];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
		cout<<endl;
	}
	
	merge_intervals(a,m,n);
	return 0;
}
