#include<iostream>
using namespace std;

class NODE
{
	public:
		char info;
		NODE* link;
		
};

class LinkedList
{
	public:
		
		NODE* start=NULL;
		
		NODE* insert(char a)
		{
			NODE* newnode= new NODE;

			newnode->link=start;
			start=newnode;
			newnode->info=a;
		
			return newnode;
		}
		
		void remove()
		{
			if(start==NULL)
			{
				cout<<"\nunderflow";
			}
			else{
				NODE* temp;
				temp=start;
				start=temp->link;
				delete temp;
			}
		}
		
		void dispaly()
		{
			NODE* ptr=start;
			while(ptr!=NULL)
			{
				cout<<ptr->info<<" ";
				ptr=ptr->link;				
			}
			
		}
};

int main()
{
	LinkedList l;
	l.insert('A');
	l.insert('B');
	l.insert('C');
	l.insert('D');
	l.dispaly();
	l.remove();
	l.remove();
	cout<<endl;
	l.dispaly();
	
	return 0;
}
