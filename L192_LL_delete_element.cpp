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

int deleteEle(struct Node *p,int index){
    struct Node *q;
    int x=-1;
    if(index<1||index>count(p)){
        return -1;
    }
    if(index==1){
            q=head;
            x=head->data;
            head=head->next;
            delete q;
            return x;
        }
    else{
        for(int i=0;i<index-1;i++){
                q=p;
                p=p->next;
            }
            q->next=p->next;
            x=p->data;
            delete p;
            return x;
        }
}

int main(){
    int a[]={10,20,30,40,50};
    create(a,5);
    cout<<"deleted: "<<deleteEle(head,4); //pass index number which you want to delete
    cout<<endl;
    display(head);
    cout<<"\n"<<count(head);
}