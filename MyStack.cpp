#include<iostream>
using namespace std;
int count=1;
class stack{
    public:
    int data;
    stack* next;
};

stack* top=NULL;

void push(stack* &head,int newData){
    stack* newNode=new stack();
    newNode->data=newData;
    if(top==NULL){
        top=newNode;
        head=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
    top=head;
    count++;
}

void pop(stack* &head){
    top=head->next;
    head=head->next;
}

bool isEmpty(stack* &head){
    return top==NULL;
}

int peek(stack* &head){
    if(top==NULL){
        cout<<"UnderFlow\n";
        return -1;
    }return top->data;
}

int size(stack* &head){
    return count;
}

void show(stack* head){
    int a[count],i=0;
    if(top==NULL)
        cout<<"UnderFlow\n";

    cout<<"[ ";
    while(head!=NULL){
        a[i]=head->data;i++;
        //cout<<head->data<<" ";
        head=head->next;
    }
    for(int j=count-1;j>=0;j--){
        cout<<a[j]<<" ";
    }
    
    cout<<"]";cout<<endl;
}


int main(){
    stack* st=NULL;
    push(st,1);
    push(st,2);
    push(st,3);
    push(st,4);
    push(st,5);
    push(st,6);
    push(st,7);
    push(st,8);
    push(st,9);
    cout<<size(st)<<endl;
    show(st);
    pop(st);cout<<peek(st)<<endl;
    pop(st);cout<<peek(st)<<endl;
    pop(st);cout<<peek(st)<<endl;

    /*cout<<isEmpty(st)<<endl;;
    push(st,4);
    show(st);
    cout<<"top is => "<<peek(st)<<endl;
    pop(st);
    cout<<"top is => "<<peek(st)<<endl;
    pop(st);pop(st);pop(st);
    peek(st);
    cout<<isEmpty(st)<<endl;*/
   // cout<<"top is => "<<peek(st)<<endl;


    return 0;
}