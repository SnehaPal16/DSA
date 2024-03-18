#include<iostream>
using namespace std;

void bubble_sort(int [],int);
void move_zeroes(int a[],int n)
{
	int temp,i,j;
	bubble_sort(a,n);
	for(i=0;i<n;i++)
	{
		if(a[0]==0){
			temp=a[0];
			for(j=0;j<n;j++)
			{
				a[j]=a[j+1];
			}
			a[n-1]=temp;
		}	
	}
	cout<<"\narray after moving zeroes:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

void bubble_sort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
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
	move_zeroes(a,n);
	delete []a;
	
	return 0;
}
