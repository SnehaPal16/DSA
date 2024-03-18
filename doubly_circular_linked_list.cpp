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
		
		NODE* createnode(int data){
			newnode=new NODE;
			newnode->data=data;
			newnode->right=NULL;
			newnode->left=NULL;
		}
		
		void insert_beg(){
			if(start==NULL){
				start=newnode;
				end=newnode;
				newnode->right=start;
				start->left=newnode;
			}
			else{
				newnode->right=start;
				start->left=newnode;
				start=newnode;
				newnode->left=end;
				end->right=newnode;
			}
		}
		
		void insert_end(){
			if(end==NULL){
				start=newnode;
				end=newnode;
				newnode->right=start;
				start->left=newnode;
			}
			else{
				newnode->left=end;
				newnode->right=start;
				end->right=newnode;
				end=newnode;
				start->left=newnode;
			}
		}
		
		
		void insert_mid(){
			if(start == NULL){
				start = newnode;
				end = newnode;
				newnode->right=start;
				start->left=newnode;
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
				while(ptr->data < newnode->data && ptr->right!=start){
					ptr=ptr->right;
				}
				newnode->right=ptr;
				newnode->left=ptr->left;
				ptr->left->right=newnode;
				ptr->left=newnode;
				
			}
		}
		
		
		void delete_beg(){
			if(start==NULL){
				cout<<"\nunderflow";
				return;
			}
			else{
				NODE* temp=start;
				if(start->right==start){
					start=NULL;
					end=NULL;
					return ;
				}
				else{
					start=start->right;
					temp->right->left=temp->left;
					end->right=temp->right;
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
				NODE* temp=end;
				if(end->left==end){
					start=NULL;
					end=NULL;
					return ;
				}
				else{
					end=end->left;
					temp->left->right=temp->right;
					start->left=temp->left;
				}
				delete temp;
			}
		}
		void delete_mid(int item){
			if(item==start->data){
				this->delete_beg();
				return;
			}
			else if(item==end->data){
				this->delete_end();
				return;
			}
			else{
				NODE* ptr=start;
				while(ptr->data!=item && ptr->right!=start){
					ptr=ptr->right;
				}
				if(ptr->data==item){
					ptr->left->right=ptr->right;
					ptr->right->left=ptr->left;
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
			while(ptr->right != start){
				cout<<ptr->data<<" ";
				ptr=ptr->right;
			}
			cout<<ptr->data;
		}
		
};

int main()
{
	d_linkedlist dl;
	dl.createnode(20);
	dl.insert_mid();
	dl.insert_mid();
	
	dl.createnode(10);
	dl.insert_mid();
	
	dl.createnode(50);
	dl.insert_mid();
	
	dl.createnode(30);
	dl.insert_mid();
	
	dl.createnode(40);
	dl.insert_mid();
	
	dl.display();
	cout<<"\n";
	
	dl.delete_mid(30);
	dl.display();
	cout<<"\n";
	
	dl.delete_mid(44);
	dl.display();
	
	return 0;
}
