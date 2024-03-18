#include<iostream>
using namespace std;

int main()
{
	char a[20],b[20];
	cout<<"\nenter any string : ";
	cin.get(a,20);
	int i,len=0;
//	i=0;
	while(a[len]!='\0')
	{
		len++;
//		i++;
	}
	int j=0;
	for(i=len-1;i>=0;i--,j++)
	{
		b[j]=a[i];
	}
	
	cout<<"reversed string :"<<b;
	int flag=0;
	for(i=0;i<len;i++)
	{
		if(a[i]!=b[i])
		{
			flag=0;
			break;
		}
		else{
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<"\nnot a pallindrome ";
	}
	else
	{
		cout<<"\nit's a pallindrome ";
	}
	
	return 0;
}
