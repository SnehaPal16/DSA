#include<iostream>
using namespace std;

void bubble_sort(int [],int);

void missing_num(int a[],int n)
{
	int i;
	bubble_sort(a,n);
		
	for(i=0;i<n+1;i++)
	{
		if(a[i]==i)
		{
			continue;
		}
		else
		{
			cout<<"missing number is :"<<i;
			break;
		}
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
	int *a,i,n;
	cout<<"\nsize of array: ";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	missing_num(a,n);
	delete []a;
}
