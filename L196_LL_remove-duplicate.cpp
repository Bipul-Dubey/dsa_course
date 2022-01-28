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
    head->next=NULL;
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

void ReverseDuplicate(struct Node *p){
    struct Node *q=p->next;
    while(q!=0){
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}

int main(){
    int a[]={1,2,3,3,3,4,9,9,9,5};
    create(a,10);
    ReverseDuplicate(head);
    display(head);
    return 0;
}