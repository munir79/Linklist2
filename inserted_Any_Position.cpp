#include<bits/stdc++.h>
using namespace std;
 class Node {
    public :
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;

    }

 };
 void insertATTAIL(Node *&head,int val){
    Node *Newnode=new Node(val);
    if(head==NULL){
        head=Newnode;
        return;
    }
    Node *tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    //tmp akhon las node a 
    tmp->next=Newnode;
    cout<<" sucessfully inserted at tail ."<<endl;

 }
 void printLinklst(Node *head){
    Node *tmp=head;
    cout <<" your Link list is :"<<endl;
    while(tmp!=NULL){
        cout<<tmp->val <<" ";
        tmp=tmp->next;
    }
    cout <<endl;
 }
 //inserted any position function 
 void inserted_Any_position(Node *head,int pos,int val){
    Node *newNode=new Node(val);
    Node *tmp=head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<" sucessfully inserted value in position "<<pos<<endl;

 }
 // inserted at head 
void inserted_At_head(Node *&head,int val){
    Node *NewNode=new Node (val);
    NewNode->next=head;
    head=NewNode;
    cout <<" inserted at head "<<endl;
}

//inserted at head end 

// delete Node 
void DeleteNode(Node *head,int pos){
    Node *tmp=head;
    for(int i=0;i<=pos-1;i++){
        tmp=tmp->next;
    }
    Node *deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
}
void DeletedHead(Node *&head){
    Node *Deletedhead=head;
    head=head->next;
    delete Deletedhead;
}
// delete Node end 
int main(){
    Node *head=NULL;
   while(true){
     int op;
    cout<<"option :1 insert at tail"<<endl;
    cout<<"option :2 print Link List "<<endl;
    cout<<" option:3 Insert at nay Position "<<endl;
    cout<<"option :4 Insert at head "<<endl;
    cout<<"option :5 Delete A Node "<<endl;
    cout<<"option :6 Delete Head"<<endl;
    cout<<"option :7 Terminate "<<endl;

    cout<<endl <<endl;
    cin>>op;
    if(op==1){
        int val;
        cout<<"Input a Value that you are inserted at tail:"<<endl;
        cin>> val;
        insertATTAIL(head,val);
    }
    else if(op==2){
        printLinklst(head);
    }
    // inserted any position 
    else if(op==3){
        int val,pos;
        cout <<"enter a Position:"<<endl;
        cin>>pos;
        cout<<"enter a value :"<<endl;
        cin>>val;
        if(pos==0){
            inserted_At_head(head,val);
        }
        else {
            inserted_Any_position(head,pos,val);
        }
    }

    // inserted any position end 
    else if(op==4){
        int val;
        cout <<" enter a value:"<<endl;
        cin>>val;
        inserted_At_head(head,val);

    }
    else if(op==5){
        int pos;
        cout<<" Enter a Position that you Deleted"<<endl;
        cin>>pos;
        DeleteNode(head,pos);
    }
    else if(op==6){
        DeletedHead(head);
    }
    else if(op==7){
        cout<< " your programme is terminate. "<<endl;
        break;
        
    }
   }

}