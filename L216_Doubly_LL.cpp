#include<iostream>
using namespace std;

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
}*head=0;

void createDLL(int a[],int n){
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

int main(){
    int a[]={1,2,3,5,6};
    createDLL(a,5);
    display(head);
    cout<<endl<<length(head);
return 0;
}