//  node consists of next(address) and data(val); 

#include<iostream>
using namespace std;
//1.define variables
class node{
    public:
     int data; 
       node* next;  //pointer next (pointing to another node)-type
       


node (int val){   //constructor
    data=val;
    next=NULL;
}
};

//linkedlist 1 2 // to :add 3
//*so head at 1*,temp will be at 2 ,after 2 null 

void insertathead(node * head, int val){
    node * n= new node(int val);
    node*temp=head;
    while( temp->next!=NULL){
        n->next=head;
        head=n;
    }
}



void insertail(node* &head, int val ){     //pass by reference  head coz we want to modify our linkedlist
    // create a node  n                          
   node* n=new node(val);

   if(head==NULL)
   {
    head=n;  // node  n is assigned to head // head will point to n next meah automaticallly its null
    return;
   }
// store the old value of head pointer  
   node* temp=head;
   while(temp->next!=NULL){
 // Change temp pointer to point to next node
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


void deleteathead(node* &head, int val){

node* todelete=head;
head=head->next;
delete todelete;

}





//deletion //will give error if we delete first node 
void deletion(node* head, int val){


    if (head=NULL){
        return;
    }
    
    if (head->next=NULL){
        deleteathead(head);
        return;
    }

    
    node*temp=head;
    while(temp->next->data!=NULL){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next>next;
  
    delete todelete;
}

class node{
    public:
    int val;
    node*previous=NULL;
    node*current=head;
    node*nextptr;

while(current!=NULL){
    next=current->next;
    current->next=previous;
    previous=current;
    current=nextptr;
}
return previous;
}



int main(){

node* head= NULL;
insertail(head, 10);
insertail(head,50);
insertail(head,90);
new_node(head,66);
display(head);
//deletion(head,10)
//deleteathead(head,10)


cout<<search(head,50)<<endl;

return 0;
}