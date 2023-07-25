# include<iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;

node(){
    this->data=0;
    this->next=NULL;
}

node(int data){
    this->data=data;
    this->next=NULL;
}
};


// inserting node at th etop of the head

void insertathead(node* &head,node* &tail , int data){
    if(head==NULL){
        node* newnode=new node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    // step1:
    node* newnode=new node(data);
    // step2:
    newnode->next=head;

    // step3:
    head=newnode;
}

// inserting node at the ending of the node::::::

void insertattail(node* &head,node* &tail, int data){
     if(head==NULL){
        node* newnode=new node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    // step1:
    node* newnode=new node(data);
    // step2:
    tail->next=newnode;

    // step3:
    tail=newnode;
}

void print(node* &head){
    node* temp=head;
    while(temp != NULL){
    cout<<temp->data<<" ";
    temp=temp->next;

    }
};

int main(){
    node* head=new node (100);
    insertathead(head,tail,40);
    insertathead(head,tail,1);
    insertathead(head,tail,3);
    insertathead(head,tail,4);
    insertattail(head,tail,59);
    // insertattail(head,tail,5);
    // insertattail(head,tail,9);
    // insertattail(head,tail,89);
    print(head);

    return 0;
}