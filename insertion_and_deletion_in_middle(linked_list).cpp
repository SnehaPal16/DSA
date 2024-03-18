#include<iostream>
using namespace std;

class NODE
{
	public:
		int info;
		NODE* link=NULL;	
};

class linkedlist
{
	public:
		
		NODE* prev;
		NODE* ptr;
		NODE* start=NULL;
		
		NODE* enqueue(int a){
			NODE* newnode = new NODE;
			newnode->info=a;
			if(start == NULL){
				start=newnode;	
			}
			else{
				if(start->info > newnode->info){
					newnode->link=start;
					start=newnode;
				}
				else{
					ptr=start;
					prev=NULL;
					while(ptr!=NULL && ptr->info < newnode->info){
						prev=ptr;
						ptr=ptr->link;
					}
					newnode->link=ptr;
					prev->link=newnode;
				}
			}
			
			return newnode;
		}	
		
		void dequeue(int item){
			NODE* temp;
			if(start==NULL)
			{
				cout<<"\nunderflow";
				return;
			}
			if(item==start->info)
			{
				temp=start;
				start=start->link;
				
			}
			else{
			    NODE* prev=NULL;
				NODE* ptr=start;
				while(ptr!=NULL && ptr->info!=item){
					prev=ptr;
					ptr=ptr->link;
				}
				if(ptr==NULL){
					cout<<"\nitem does not exists";
					return;
				}
				temp=ptr;
				prev->link=ptr->link;
			}
			delete temp;
		}
		
		
		void display()
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
	
	l.enqueue(1);
	l.enqueue(0);
	l.enqueue(10);
	l.enqueue(5);
	
	l.display();
	cout<<endl;
	l.dequeue(5);
	l.dequeue(0);
	
	l.display();
	
	return 0;
}
