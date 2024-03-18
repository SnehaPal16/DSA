#include<iostream>
using namespace std;

class NODE
{
	public:
		char info;
		NODE* link=NULL;
};

class linkedlist
{
	public:
		NODE* start=NULL;
		
		NODE* insert(char a)
		{
			NODE* newnode=new NODE;
			
			if(start==NULL)
			{
				start=newnode;
				newnode->info=a;
			}
			else
			{
				NODE* ptr=start;
				while(ptr->link!=NULL){
					ptr=ptr->link;
				}
				ptr->link=newnode;
				newnode->info=a;
			}
			return newnode;
		}
		
		void remove()
		{
			NODE* temp;
			if(start==NULL)
			{
				cout<<"\nunderflow";
				return;
			}
			if(start->link==NULL)
			{
				temp=start;
				start=NULL;
			}
			else
			{
				NODE* ptr=start;
				NODE* prev;
				while(ptr->link != NULL)
				{
					prev=ptr;
					ptr=ptr->link;
				}
				temp=ptr;
				prev->link=NULL;				
			}
			delete temp;
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
	linkedlist l;
	l.insert('a');
	l.insert('b');
	l.insert('c');
	l.insert('d');
	
	l.dispaly();
	
	l.remove();
	l.remove();
	cout<<endl;
	l.dispaly();
	
	return 0;
}
