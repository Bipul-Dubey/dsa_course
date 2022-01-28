#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
}*head,*head2,*head3;

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

void create2(int a[],int n){
    struct Node *first,*last;
    head2=new struct Node;
    head2->data=a[0];
    head2->next=0;
    last=head2;
    for(int i=1;i<n;i++){
        first=new struct Node;
        first->data=a[i];
        first->next=0;
        last->next=first;
        last=first;
    }
}

void display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

void Concat(struct Node *p,struct Node *q){
    head3=p;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=q;
}

void Merge(struct Node *p,struct Node *q){
    struct Node *last;
    if(p->data<q->data){
        head3=last=p;
        p=p->next;
        head3->next=NULL;
    }
    else{
        head3=last=q;
        q=q->next;
        head->next=NULL;        
    }
    while(p && q){
        if(p->data<q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=0;
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=0;

        }
    }
    if(p){
        last->next=p;
    }
    if(q){
        last->next=q;
    }
}

int main(){
    int a[]={10,20,30,40,50};
    int b[]={15,25,35,45,65};
    create(a,5);
    create2(b,5);
    cout<<"first: ";
    display(head);
    cout<<endl;
    cout<<"second: ";
    display(head2);
    cout<<endl;
    /*Concat(head,head2);
    display(head3);*/
    cout<<endl;
    Merge(head2,head);
    display(head3);
    return 0;
}