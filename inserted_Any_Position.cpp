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
 void inserted_Any_position(Node *head,int pos,int val){
    Node *newNode=new Node(val);
    Node *tmp=head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<"inserted value in position "<<pos<<endl;

 }

int main(){
    Node *head=NULL;
   while(true){
     int op;
    cout<<"option :1 insert at tail"<<endl;
    cout<<"option :2 print Link List "<<endl;
    cout<<" option:3 Insert at nay Position "<<endl;
    cout<<"option :4 Terminate "<<endl;

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
    else if(op==3){
        int val,pos;
        cout <<"enter a Position:"<<endl;
        cin>>pos;
        cout<<"enter a value :"<<endl;
        cin>>val;
        inserted_Any_position(head,pos,val);
    }
    else if(op==4){
        break;
    }
   }

}