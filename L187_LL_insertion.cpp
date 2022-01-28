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
    head->next=0;
    last=head;
    for(int i=1;i<n;i++){
        first=new struct Node;
        first->data=a[i];
        first->next=0;
        last->next=first;
        last=first;
    }
}

void display(struct Node *p){
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int count(struct Node *p){
    int c=0;
    while(p!=0){
       c++;
       p=p->next; 
    }
    return c;
}

void Insert(struct Node *p,int index,int x){
    struct Node *t;
    if(index<0||index>count(p)){
        return;
    }
    t=new struct Node;
    t->data=x;
    if(index==0){
        t->next=head;
        head=t;
    }
    else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }       
        t->next=p->next;  
        p->next=t;       
    }
}

void SortInsert(struct Node *p,int x){          //insert in sorted list
    struct Node *first,*q=NULL;
    first=new struct Node;
    first->data=x;
    first->next=NULL;
    if(head==NULL){
        head=first;
    }
    else{
        while(p && p->data<x){
            q=p;
            p=p->next;
        }
        if(p==head){
            first->next=head;
            head=first;                        
        }
        else{
            first->next=q->next;
            q->next=first;
        }
    }
}

int main(){
    int a[]={10,20,30,40,50,60};
    cout<<endl;
    create(a,6);
    SortInsert(head,555);
    display(head);
    cout<<endl<<count(head);
    return 0;
}