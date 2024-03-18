#include<iostream>
#include<bits/stdcnvb++.h>
using namespace std;

void selection_sort(int a[],int n)
{
	int i,j,min;
	for(i=0;i<n-1;i++)
	{
		min=a[i];
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]<min)
				{
					swap(min,a[j]);
				}
			}
			a[i]=min;
		}
	}
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	int *a,n,i;
	cout<<"\nenter size: ";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	selection_sort(a,n);
	delete []a;
	return 0;
}
