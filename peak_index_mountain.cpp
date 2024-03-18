#include<iostream>
using namespace std;




void peak_index(int *,int);
void is_mountain(int a[],int n)
{
	if(n>=3)
	{
		int id,i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		peak_index(a,n);
	}
	else
	{
		cout<<"\nnot a mountained array";
	}
}
void peak_index(int a[],int n)
{
	int max,i;
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(max==a[i])
		{
			cout<<"\npeak index :"<<i;	
			break;
		}
	}	
}
int main()
{
	int *a;
	int n,i;
	cout<<"\nsize of array :";
	cin>>n;
	a=new int[n];
	
	is_mountain(a,n);
	delete []a;
	return 0;
}
