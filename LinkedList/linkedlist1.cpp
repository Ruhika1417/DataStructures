//  node consists of next(address) and data(val);

#include<iostream>
using namespace std;
//1.define variables
class node{
    public: 
       node* next;  //pointer next pointing to another node
       int data;


node (int val){
    data=val;
    next=NULL;
}
};

void insertail(node* &head, int val ){     //pass by reference  head coz we want to modify our linkedlist
    // create a node                            
   node* n=new node(val);

   if(head==NULL)
   {
    head=n;
    return;
   }

   node* temp=head;
   while(temp->next!=NULL){
       temp=temp->next;
   }
    temp->next=n;
    
}  

//adding a new node at start(head)



//we could also use head here directly
void display(node* head){ //by value 
    node* temp=head;   //initialize temp again
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}


void new_node(node* &head, int val){
    node* m=new node(val);
     m->next=head;
     head=m; //moved head then 
    // head->data=
}

//searching
bool search (node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
        return true;
   }
   temp=temp->next;
}
     return false;
}



int main(){

node* head= NULL;
insertail(head, 10);
insertail(head,50);
insertail(head,90);
new_node(head,66);
display(head);

cout<<search(head,50)<<endl;




return 0;
}
