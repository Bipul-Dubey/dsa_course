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

int Delete(struct Node *p,int index){
    struct Node *q;
    int x=-1;
    if(index<1 || index>length(p)){
        return -1;
    }
    if(index==1){
        head=head->next;
        if(head)head->prev=NULL;
        x=p->data;
        delete p;
    }
    else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next){
            p->next->prev=p->prev;
        }   
        x=p->data;
        delete p;    
    }
    return x;
}

int main(){
    int a[]={20,30,40,50,60};
    create(a,5);
    cout<<Delete(head,5);
    cout<<endl;
    cout<<length(head);
    cout<<endl;
    display(head);
return 0;
}