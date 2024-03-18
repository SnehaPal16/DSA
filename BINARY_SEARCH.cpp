#include<iostream>
using namespace std;


void binary_search(int a[],int n,int num)
{
	int l,h,m,ctr=0;
	l=0;
	h=n-1;
	while(l<=h)
	{
		m=l+(h-l)/2;
		if(num==a[m])
		{
			ctr++;
			break;
		}
		else if(num<a[m])
		{
			h=m-1;
		}
		else{
			l=m+1;
		}
	}
	if(ctr!=0)
	{
		cout<<"\n"<<num<<" is at "<<m<<" index";
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
	binary_search(a,n,num);
	delete []a;
	return 0;
}
