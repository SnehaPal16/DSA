#include<iostream>
using namespace std;

int main()
{
	int *a,i,n,j,k;
	cout<<"\nenter number of elements in an array :";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int num;
	cout<<"\nenter the index upto which subarray u want :";
	cin>>num;
	int max;
	max=a[0];
	for(i=0;i<=num;i++)
	{
		cout<<"\n";
		for(j=i;j<=num;j++)
		{
			cout<<"\n";
			int sum=0;
			for(k=i;k<=j;k++)
			{
				cout<<a[k]<<" ";
				sum=sum+a[k];			
			}
			if(sum>max)
			{
				max=sum;
			}
		}
	}
	cout<<"\nmaximum sum is :"<<max;	
	delete []a;
	return 0;
}
