#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head;

void create(int a[],int n){
    struct Node *first,*last;
    head=new struct Node;
    head->data=a[0];
    head->next=head;
    last=head;
    for(int i=1;i<n;i++){
        first=new struct Node;
        first->data=a[i];
        first->next=last->next;
        last->next=first;
        last=first;
    }
}

void display(struct Node *p){
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

int Length(struct Node *p){
    int len=0;
    do{
        len++;
        p=p->next;
    }while(p!=head);
    return len;
}

void insert(struct Node *p,int index,int x){
    struct Node *t;
    if(index<0 || index>Length(p)){
        return;
    }
    if(index==0){
        t=new struct Node;
        t->data=x;
        if(head==NULL){
            head=t;
            head->next=head;            
        }
        else{
            while(p->next!=head)p=p->next;
            p->next=t;
            t->next=head;
            head=t;
        }
    }
    else{
        for(int i=0;i<index-1;i++)p=p->next;
        t=new struct Node;
        t->data=x;
        t->next=p->next;
        p->next=t;       
    }
}

int main(){
    int a[]={1,2,3,4,5};
    create(a,5);
    insert(head,1,6);
    display(head);
return 0;
}