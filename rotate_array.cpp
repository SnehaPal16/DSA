#include<iostream>
using namespace std;


void rotate_array(int a[],int n,int k)
{
	int temp,i,j;
	for(i=0;i<k;i++)
	{
		temp=a[n-1];
		for(j=n-1;j>=0;j--)
		{
			a[j+1]=a[j];
		}
		a[0]=temp;
	}
	cout<<"\nrotated array :";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int *a,i,n,k;
	cout<<"\nsize of array: ";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nenter no. of times to rotate:";
	cin>>k;
	rotate_array(a,n,k);
	delete []a;
	
	return 0;
}
