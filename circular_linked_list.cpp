#include<iostream>
using namespace std;

class NODE{
	public:
		int data;
		NODE* next=NULL;
};

class linkedlist{
	public:
		NODE* start=NULL;
		NODE* newnode;
		
		NODE* createnode(int a){
			newnode=new NODE;
			newnode->data=a;
			newnode->next=NULL;
		}
		void insert_beg(){
			
			if(start==NULL){
				start=newnode;
				newnode->next=start;
			}
			else{
				NODE* ptr=start;
				while(ptr->next!=start){
					ptr=ptr->next;
				}
				newnode->next=start;
				start=newnode;
				ptr->next=start;
			}
		}
		void insert_end(){
			if(start==NULL){
				start=newnode;
				newnode->next=start;
			}
			else{
				NODE* ptr=start;
				while(ptr->next!=start){
					ptr=ptr->next;
				}
				newnode->next=start;
				ptr->next=newnode;
			}
		}
		void insert_mid(){
			NODE* ptr=start;
			NODE* prev=NULL;
			
			if(start==NULL){
				start=newnode;
				newnode->next=start;
			}
					
			
			else{
				while(newnode->data > ptr->data && ptr->next!=start){
					prev=ptr;
					ptr=ptr->next;
				}
			
				if(newnode->data < ptr->data){
					if(newnode->data < start->data){
						this->insert_beg();
					}
					else{					
						newnode->next=ptr;
						prev->next=newnode;	
					}
				}
				else{
					this->insert_end();
				}
			}
			
		}
		
		void delete_beg(){
			if(start==NULL){
				cout<<"\nunderflow";
				return;
			}
			else{
				NODE* temp;
				temp=start;
				if(start->next==start){
					start=NULL;
					return;
				}
				else{
					NODE* ptr;
					ptr=start;
					while(ptr->next!=start){
						ptr=ptr->next;
					}
					ptr->next=start->next;
					start=start->next;
					
				}
				delete temp;
			}
		}
		void delete_end(){
			if(start==NULL){
				cout<<"\nunderflow";
				return;
			}
			else{
				NODE* temp=start;				
				if(start->next==start){
					start=NULL;
					return;
				}
				else{
					NODE* ptr=start;
					NODE* prev=NULL;
					while(ptr->next!=start){
						prev=ptr;
						ptr=ptr->next;						
					}
					prev->next=ptr->next;
					delete ptr;
				}
			}
		}
		void delete_mid(int item){
			if(item==start->data){
				this->delete_beg();
				return;
			}
			else{
				NODE* ptr=start;
				NODE* prev=NULL;
				while(ptr->data!=item && ptr->next!=start){
					prev=ptr;
					ptr=ptr->next;
				}
				if(ptr->data==item){
					prev->next=ptr->next;
					delete ptr;
				}
				else{
					cout<<"\nitem doesnt exists";					
				}
				
			}			
		}
		
		void display()
		{
			NODE* ptr=start;
			if(start==NULL){
				cout<<"\nempty";
			}
			else{
				while(ptr->next!=start){
				cout<<ptr->data<<" ";
				ptr=ptr->next;
				}
				cout<<ptr->data;
			}
		}
	
};



int main()
{
	linkedlist l;
	
	l.createnode(40);
	l.insert_mid();
	
	l.createnode(20);
	l.insert_mid();
	
	l.createnode(30);
	l.insert_mid();
	
	l.createnode(10);
	l.insert_mid();
	
	l.createnode(50);
	l.insert_mid();
	
	
	
	l.display();
	cout<<"\n";
	
	l.delete_mid(10);
	l.display();
	cout<<"\n";
	
	l.delete_mid(50);
	l.display();
	
	return 0;
}




