#include<iostream>
using namespace std;


class NODE{
	public:
		int data;
		NODE* left;
		NODE* right;
};

class d_linkedlist{
	public:
		NODE* newnode;
		NODE* start=NULL;
		NODE* end=NULL;
		
		NODE* createnode(int a){
			newnode= new NODE;
			newnode->data=a;
			newnode->right=NULL;
			newnode->left=NULL;
		}
		
		void insert_beg(){
			if(start==NULL){
				start=newnode;
				end=newnode;
			}
			else{
				newnode->right=start;
				start->left=newnode;
				start=newnode;
			}
		}
		
		void insert_end(){
			if(end==NULL){
				start=newnode;
				end=newnode;
			}
			else{
				newnode->left=end;
				end->right=newnode;
				end=newnode;
			}
		}
		
		
		void insert_mid(){
			if(start == NULL){
				start = newnode;
				end = newnode;
			}
			else if(newnode->data < start->data){
				this->insert_beg();
				return;
			}
			else if(newnode->data > end->data){
				this->insert_end();
				return;
			}
			else{
				NODE* ptr=start;
				while(ptr->data < newnode->data){
					ptr=ptr->right;
				}
				newnode->right=ptr;
				newnode->left=ptr->left;
				ptr->left->right=newnode;
				ptr->left=newnode;
				
			}
		}
		
		void delete_mid(int d)
		{
			NODE* temp;
			if(start==NULL){
				cout<<"\nunderflow";
				return;
			}
			if(start->data==d){
				temp=start;
				if(start==end){
					start=NULL;
					end=NULL;
				}
				else{
					start=start->right;
					start->left=NULL;
				}
				delete temp;
			}
			else if(end->data==d){
				temp=end;
				if(start==end){
					start=NULL;
					end=NULL;
				}
				else{
					end=end->left;
					end->right=NULL;
				}
				delete temp;
			}
			else{
				NODE* ptr = start;
				while(ptr!=NULL){
					if(ptr->data==d){
						break;
					}
					ptr=ptr->right;
				}
				if(ptr==NULL){
					cout<<"\nitem doesn't exists";
					return;
				}
				ptr->left->right=ptr->right;
				ptr->right->left=ptr->left;
				
				delete ptr;				
			}
		}
		
		void display()
		{
			NODE* ptr=start;
			while(ptr!=NULL){
				cout<<ptr->data<<" ";
				ptr=ptr->right;
			}
		}
};

int main(){
	d_linkedlist dl;
	
//	cout<<"\ninsert at the begning :";
//	dl.createnode(10);
//	dl.insert_beg();
//	
//	dl.createnode(20);
//	dl.insert_beg();
//	
//	dl.createnode(30);
//	dl.insert_beg();
//	
//	dl.display();
//	
//	cout<<"\ninsert at the end :";
//	dl.createnode(100);
//	dl.insert_end();
//	
//	dl.createnode(200);
//	dl.insert_end();
//	
//	dl.createnode(300);
//	dl.insert_end();
//	
//	dl.display();
	
	
	dl.createnode(25);
	dl.insert_mid();
	
	dl.createnode(5);
	dl.insert_mid();
	
	dl.createnode(500);
	dl.insert_mid();
	
	dl.createnode(400);
	dl.insert_mid();
	
	dl.createnode(300);
	dl.insert_mid();
	
	cout<<"\ninsert in the middle :";
	dl.display();
	
	cout<<"\nafter deletion :";
	dl.delete_mid(5);
	dl.display();
	cout<<endl;
	
	dl.delete_mid(300);
	dl.display();
	cout<<endl;
	
	dl.delete_mid(500);
	dl.display();
	cout<<endl;
	
	dl.delete_mid(250);
	
	return 0;
}
