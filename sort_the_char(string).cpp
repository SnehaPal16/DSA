using namespace std;
#include<iostream>
#include<string.h>

int main()
{
	char a[20];
	int i,len;
	cout<<"\nenter any string : ";
	cin.get(a,20);
	for(len=0;a[len]!='\0';len++);
	char temp;
	for(i=1;i<=len;i++)
	{
		for(int j=0;j<len-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;	
			}
		}
	}
	cout<<"\sorted char:"<<a;
	
	return 0;
}
