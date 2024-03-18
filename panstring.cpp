#include<iostream>
using namespace std;

int main()
{
	char a[20];
	int i;
	cout<<"\nenter any string : ";
	cin.get(a,20);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i]+=32;
		}
	}
	
	int chr;
	for(chr=97;chr<=122;chr++)
	{
		int flag=0;
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]==chr)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"\nnot a pan string";
			return 0;
		}
	}
	
	cout<<"\nits a pan string";
	
	
	return 0;
}
