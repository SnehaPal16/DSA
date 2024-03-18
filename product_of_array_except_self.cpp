#include<iostream>
using namespace std;


void product_array(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		int sum=1;
		for(j=0;j<n;j++)
		{
			if(j==i)
			{
				continue;
			}
			sum=sum*a[j];
		}
		cout<<sum<<" ";
	}
}
int main()
{
	int *a,i,n;
	cout<<"\nsize of array: ";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	product_array(a,n);
	delete []a;
	
	return 0;
}
