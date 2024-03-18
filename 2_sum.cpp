#include<iostream>
using namespace std;


int main()
{
	int *a,n,i,j,temp,sum;
	cout<<"\nenter number of elements in array : ";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
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
	cout<<"\narray in sorted order : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nenter the sum u want :";
	cin>>sum;
	int *s=&a[0];
	int *e=&a[n-1];
	while(s!=e)
	{
		if(*s+*e==sum)
		{
			cout<<"\n"<<sum<<" is of "<<*s<<" and "<<*e;
			s++;
		}
		else if(*s+*e>sum)
		{
			e--;
		}
		else if(*s+*e<sum)
		{
			s++;
		}
		else
		{
			cout<<"sum not found";
		}
		
	}
	delete [] a;
	return 0;
}
















