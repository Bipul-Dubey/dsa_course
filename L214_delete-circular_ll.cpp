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

int Delete(struct Node *p,int index){
    struct Node *q;
    int x;
    if(index<0 || index>Length(head)){
        return -1;
    }
    if(index==1){
        while(p->next!=head)p=p->next;
        x=head->data;
        if(head==p){
            delete head;
            head=NULL;
        }
        else{
            p->next=head->next;
            delete head;
            head=p->next;
        }
    }
    else{
        for(int i=0;i<index-2;i++)
            p=p->next;
        q=p->next;
        p->next=q->next;
        x=q->data;
        delete q;
    }
    return x;
}

int main(){
    int a[]={1,2,3,40,5};
    create(a,5);
    display(head);
    cout<<"\ndeleted element: "<<Delete(head,4);
    cout<<endl;
    display(head);
return 0;
}