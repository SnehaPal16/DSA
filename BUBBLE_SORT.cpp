#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void bubble_sort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				/*temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;*/
				swap(a[j],a[j+1]);
			}
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
	bubble_sort(a,n);
	delete []a;
	return 0;
}
