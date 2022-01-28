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
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int count(struct Node *p){
    int c=0;
    while(p){
        c++;
        p=p->next;
    }
    return c;
}

void Reverse1(struct Node *p){
    int *a,i=0;
    a=new int[count(p)];
    struct Node *q=p;
    while(q){
        a[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q){
        q->data=a[i];
        q=q->next;
        i--;
    }
}

void Sreverse(struct Node *p){  //reverse using slider pointer
    struct Node *q=0,*r=0;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
}

void RecReverse(struct Node *q,struct Node *p){
    if(p){
        RecReverse(p,p->next);
        p->next=q;
    }
    else{
        head=q;
    }
}

int main(){
    int a[]={1,2,3,4,5,6};
    create(a,6);
    RecReverse(0,head);
    display(head);
    cout<<endl<<count(head);
    
    return 0;
}