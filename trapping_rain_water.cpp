#include<iostream>
using namespace std;


void trapped_water(int a[],int n)
{
	int i;
	int *left;
	int *right;
	left=new int[n];
	//int min;
	
	left[0]=a[0];
	for(i=1;i<n;i++)
	{
		if(left[i-1]<a[i])
		{
			left[i]=a[i];
		}
		else
		{
			left[i]=left[i-1];
		}
	}
	cout<<"\nleft array: ";
	for(i=0;i<n;i++)
	{
		cout<<left[i];
	}
	
	right=new int[n];
	right[n-1]=a[n-1];
	for(i=n-2;i>=0;i--)
	{
		if(right[i+1]<a[i])
		{
			right[i]=a[i];
		}
		else
		{
			right[i]=right[i+1];
		}
	}
	cout<<"\nright array: ";
	for(i=0;i<n;i++)
	{
		cout<<right[i];
	}
	
	//min array out of left and right:
	
	int sum=0;
	for(i=0;i<n;i++)
	{
		int min;
		min=(left[i]<right[i])?left[i]:right[i];
		
		sum+=(min-a[i]);
	}
	
	cout<<"\ntotal water trapped: "<<sum<<"units";
	
	
	delete []left;
	delete []right;
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
	trapped_water(a,n);
	delete []a;
	
	return 0;
}
