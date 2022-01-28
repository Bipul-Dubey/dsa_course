#include<iostream>
using namespace std;

struct Node{
    struct Node  *prev;
    int data;
    struct Node *next;
}*head;

void create(int a[],int n){
    struct Node *first,*last;
    head=new struct Node;
    head->data=a[0];
    head->next=head->prev=NULL;
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

void reverse(struct Node *p){
    struct Node *temp;
    while(p!=NULL){
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=NULL && p->next==NULL){
            head=p;
        }
    }
}

int main(){
    int a[]={20,30,40,50,60};
    create(a,5);
    cout<<length(head);
    cout<<endl;
    display(head);
    cout<<endl;
    reverse(head);
    display(head);
return 0;
}