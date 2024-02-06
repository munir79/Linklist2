
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int val;
Node *next;
Node(int val){
    this->val=val;
    this->next=NULL;
}
};
void Inserted_at_Tail(Node *&head ,int v){
    Node *NewNode=new Node(v);
    Node *tmp=head;
    if(head==NULL){
        head=NewNode;
        return;
    }

    while (tmp->next!=NULL){
        tmp=tmp->next;
    }
    //tmp akhon last node a 
    tmp->next=NewNode; 
}
void printLinkList(Node *head){
    Node *tmp=head;
    cout <<" Your Link List is :"<<endl;
    while(tmp !=NULL){
        cout<<tmp->val<<" "<<endl;
        tmp=tmp->next;
    }

}


int main(){
    Node *head=NULL;
   while(true){
     int op;
    cout <<"enter your Option:"<<endl;
    cout<<"Option 1: Insert at Tail:"<<endl;
    cout<<"option 2: Print Link List:"<<endl;
    cout <<"option 3: Terminate"<<endl;
    cin>> op;
    if(op==1){
        int val;
        cout<<" enter your value that you inserted:"<<endl;
        cin>>val;
        Inserted_at_Tail(head,val);
    }
    else if(op==2){
        printLinkList(head);
    }
    else if(op==3){
        break;
    }
   }

}

