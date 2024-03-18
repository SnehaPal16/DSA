#include<iostream>
using namespace std;

int main()
{
	int *a;
	int i,n,num,max,sum,j,k;
	cout<<"\nenter val of n : ";
	cin>>n;
	a=new int[n];
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"UPTO WHICH INDEX:";
	cin>>num;
	
	for(i=0;i<=num;i++)
	{
		cout<<endl;
		for(k=i;k<=num;k++)
		{
			cout<<endl;	
			for(j=i;j<=k;j++)
			{
				cout<<a[j]<<" ";
			}	
		}	
	}
	delete []a;
	
	return 0;
}
