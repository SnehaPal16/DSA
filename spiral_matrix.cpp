#include<iostream>
using namespace std;


int main()
{
	int i,j,m,n;
	cout<<"ENTER NUMBER OF ROWS:";
	cin>>m;
	cout<<"ENTER NUMBER OF COLUMNS:";
	cin>>n;
	int a[20][20];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int l=0,r=n-1,t=0,b=m-1;
	
	while(b>=t && r>=l)
	{
		for(i=l;i<=r;i++)
		{
			cout<<a[t][i]<<" ";
		}
		t++;
		for(i=t;i<=b;i++)
		{
			cout<<a[i][r]<<" ";
		}
		r--;
		if(t<b)
		{
			for(i=r;i>=l;i--)
			{
				cout<<a[b][i]<<" ";
			}
			b--;
		}
		if(l<r)
		{
			for(i=b;i>=t;i--)
			{
				cout<<a[i][l]<<" ";
			}
			l++;
		}
	}
	
	return 0;
}
