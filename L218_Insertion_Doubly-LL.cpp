#include<iostream>
using namespace std;

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
}*head;

void create(int a[],int n){
    struct Node *first,*last;
    head=new struct Node;
    head->data=a[0];
    head->prev=head->next=NULL;
    last=head;
    for(int i=1;i<n;i++){
        first=new struct Node;
        first->data=a[i];
        first->next=last->next;
        first->prev=last;
        last->next=first;
        last=first;
    }
}

void display(struct Node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int length(struct Node *p){
    int len=0;
    while(p){
        len++;
        p=p->next;
    }
    return len;
}

void Insert(struct Node *p,int index,int x){
    struct Node *t;
    if(index<0 || index>length(p)){
        return;
    }
    if(index==0){
        t=new struct Node;
        t->data=x;
        t->prev=0;
        t->next=head;
        head->prev=t;
        head=t;
    }
    else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        t=new struct Node;
        t->data=x;
        t->prev=p;
        t->next=p->next;
        if(p->next){
            p->next->prev=t;
        }
        p->next=t;
    }
}

int main(){
    int a[]={10,20,30,40,50};
    create(a,5);
    Insert(head,5,100);
    display(head);
return 0;
}