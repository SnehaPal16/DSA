#include<iostream>
using namespace std;


void insertion_sort(int a[],int n)
{
	int k,p,temp;
	for(k=1;k<n;k++)
	{
		p=k-1;
		temp=a[k];
		while(a[p]>temp && p>=0)
		{
			a[p+1]=a[p];
			p=p-1;
		}
		a[p+1]=temp;
	}
}
int main()
{
	int *a,i,n;
	cout<<"\nenter size:";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	insertion_sort(a,n);
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	delete []a;
	return 0;
}
