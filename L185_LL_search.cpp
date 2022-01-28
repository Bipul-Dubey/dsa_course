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
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
}

struct Node * Search(struct Node *p,int key){
    while(p!=0){
        if(key==p->data){
            return p;
        }
        p=p->next;
    }
    return 0;
}

struct Node * RSearch(struct Node *p,int key){
    if(p==NULL){
        return 0;
    }
    if(key==p->data){
        return p;
    }
    else{
        return RSearch(p->next,key);
    }
}

struct Node * MHsearch(struct Node *p,int key){
    Node *q=NULL;
    while(p!=0){
        if(key==p->data){
            q->next=p->next;
            p->next=head;
            head=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return 0;
}

int main(){
    int a[]={2,3,5,1,22,12};
    create(a,6);
    display(head);
    cout<<endl;
    struct Node *t;
    t=MHsearch(head,5);
    if(t){
        cout<<t->data<<" key found"<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }
    display(head);
    return 0;
}