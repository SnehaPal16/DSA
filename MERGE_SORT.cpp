#include<iostream>
using namespace std;

void merge(int [],int,int,int);
void merge_sort(int a[],int l,int h)
{
	if(l<h)
	{
		int m=l+(h-l)/2;
		merge_sort(a,l,m);
		merge_sort(a,m+1,h);
		merge(a,l,m,h);
	}
}

void merge(int a[],int l,int m,int h)
{
	int i=l,j=m+1,k=l;
	int *b=new int[l+h];
	while(i<m && j<h)
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>m)
	{
		for(int p=i;p<=h;p++)
		{
			b[k]=a[p];
			k++;
		}
	}
	else
	{
		for(int p=j;p<=h;p++)
		{
			b[k]=a[p];
			k++;
		}
	}
	for(i=0;i<l+h;i++)
	{
		a[i]=b[i];
	}
	delete []b;
}

int main()
{
	int *a,i,n,l,h;
	int *b,m;
	int *c;
	
	cout<<"\nenter size:";
	cin>>n;
	a=new int[n];
	cout<<"\narray : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	l=a[0];
	h=a[n-1];
	merge_sort(a,l,h);
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	delete []a;
	return 0;
}
