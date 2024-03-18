#include<iostream>
using namespace std;

int main()
{
	int l=1,m,h;
	int b,n;
	cout<<"\nenter total no. of balls  : ";
	cin>>b;	
	h=b;
	while(l<=h)
	{
		m=l+((h-l)/2);
		n=m;
		int s=(n*(n+1)/2);
		if(s>h)
		{
			h=m-1;
		}
		else if(s<h)
		{
			l=m+1;
		}
		else
		{
			break;
		}
	
	}
	
	cout<<"\ntotal number of rows formed :"<<n;
	return 0;
}
