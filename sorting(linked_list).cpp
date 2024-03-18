#include<iostream>
using namespace std;

class NODE{
	public:
		int data;
		NODE* next;
};

class linkedlist{
	public:
		NODE* newnode;
		NODE* start=NULL;
		
		void insert(int data){
			newnode=new NODE;
			newnode->data=data;
			newnode->next=NULL;
			
			if(start==NULL){
				start=newnode;
				return;
			}
			else{
				NODE* ptr=start;
				while(ptr->next!=NULL){
					ptr=ptr->next;
				}
				ptr->next=newnode;
			}
//			else{
//				if(start->data > newnode->data){
//					newnode->next=start;
//					start=newnode;
//				}
//				else{
//					NODE* ptr=start;
//					NODE* prev=NULL;
//					
//					while(ptr!=NULL && ptr->data < newnode->data){
//						prev=ptr;
//						ptr=ptr->next;
//					}
//					newnode->next=ptr;
//					prev->next=newnode;
//				}
//			}
		}
		
		void deletion(int item){
			if(start==NULL){
				cout<<"\nunderflow";
				return;
			}
			else{
				NODE* ptr=start;
				NODE* prev=NULL;
				NODE* temp;
				while(ptr!=NULL && ptr->data !=item){
					prev=ptr;
					ptr=ptr->next;
				}
				if(ptr==NULL){
					cout<<"\nitem dosesn't exists";
					return;
				}
				else{
					temp=ptr;
					prev->next=ptr->next;
				}
				delete temp;
			}
		}
		
		void sort(){
			
		}
		
		void display(){
			NODE* ptr= start;
			while(ptr!=NULL){
				cout<<ptr->data<<" ";
				ptr=ptr->next;
			}
		}
};



int main(){
	linkedlist l;
	int a[5]={30,20,50,40,10};
	for(int i=0;i<5;i++){
		l.insert(a[i]);
	}
	
	l.display();
	return 0;
}

