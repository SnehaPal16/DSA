#include<iostream>
using namespace std;

int main()
{
	char a[20];
	cout<<"\nenter any string : ";
	cin.get(a,20);
	int i,s;
	for(i=0;a[i]!='\0';i++)
	{
		s=a[i];
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i]+=32;
		}
		else{
			a[i]=a[i]-32;
		}
	}
	cout<<"\ntoggled string is :"<<a;	
	return 0;
}
