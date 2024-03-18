#include<iostream>
using namespace std;


void merge(int a[],int b[],int c[],int n,int m)
{
	int i=0,j=0,k=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			b++;
		}
		k++;	
	}
	if(i==n)
	{
		for(int p=j;p<m;p++)
		{
			c[k]=b[p];
			k++;
		}
	}
	else
	{
		for(int p=i;p<n;p++)
		{
			c[k]=a[p];
			k++;
		}
	}
}
int main()
{
	int *a,i,n;
	int *b,m;
	int *c;
	
	cout<<"\nenter size of array 1:";
	cin>>n;
	a=new int[n];
	cout<<"\narray 1 : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\nenter size of array 2:";
	cin>>m;
	b=new int[m];
	cout<<"\narray 2 : ";
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	
	c=new int[n+m];
	merge(a,b,c,n,m);
	
	cout<<"\nmerged array : ";
	for(i=0;i<n+m;i++)
	{
		cout<<c[i]<<" ";
	}
	delete []a;
	delete []b;
	delete []c;
	return 0;
}
