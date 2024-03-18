#include<iostream>
using namespace std;

class NODE
{
	public:
		int data;
		NODE* next;
};



class linkedlist
{
	public:
		
		NODE* start=NULL;
	
		NODE* insert_beg(int a){
			NODE* newnode=new NODE;
						
			newnode->next=start;
			start=newnode;
			newnode->data=a;
					
			return newnode;
		}
		
		void search(int item){
			NODE* ptr;
			if(start==NULL){
				cout<<"\n item does not exists";
				return;
			}
			if(start->data==item)
			{
				int ctr=0;
				ctr++;
				cout<<"\nitem found at "<<ctr<<" node";
				return;
			}
			else{
				int ctr=0;
				
				ptr=start;
				while(ptr!=NULL && ptr->data!=item){
					ptr=ptr->next;
					ctr++;
				}
				if(ptr==NULL)
				{
					cout<<"\nitem does not exists";
					return;
				}
				cout<<"\nitem found at "<<ctr+1<<" node";
				return;
			}
		}
		
		void display()
		{
			NODE* ptr=start;
			while(ptr!=NULL)
			{
				cout<<ptr->data<<" ";
				ptr=ptr->next;
			}
		}
		
};


int main()
{
	linkedlist l;
	l.insert_beg(10);
	l.insert_beg(20);
	l.insert_beg(30);
	l.insert_beg(40);
	l.insert_beg(50);
	l.insert_beg(60);
	
	l.display();
	
	l.search(10);
	l.search(60);
	l.search(30);
	l.search(100);
	
	return 0;
}








