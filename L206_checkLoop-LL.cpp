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

int isloop(struct Node *f){
    struct Node *p,*q;
    p=q=f;
    do{
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }while(p && q && p!=q);
    if(p==q){
        return 1;
    }
    return 0;
}

int main(){
    struct Node *t1,*t2;

    int a[]={1,2,3,4,5};
    create(a,5);
    t1=head->next->next;
    t2=head->next->next->next;
    t2->next=t1;
    //display(head);
    cout<<isloop(head);
return 0;
}