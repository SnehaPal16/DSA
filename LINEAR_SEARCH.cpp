#include<iostream>
using namespace std;

void linear_search(int a[],int n,int num)
{
	int i,ctr=0;
	for(i=0;i<n;i++)
	{
		if(num==a[i])
		{
			ctr++;
			break;
		}
	}
	if(ctr!=0)
	{
		cout<<"\n"<<num<<" is at "<<i<<" index";
	}
	else
	{
		cout<<"\nnumber doesnt exists";
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
	int num;
	cout<<"\nenetr number to search :";
	cin>>num;
	linear_search(a,n,num);
	delete []a;
	return 0;
}
