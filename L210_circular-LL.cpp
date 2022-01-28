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

void Rdisplay(struct Node *p){
    static int flag=0;
    if(p!=head || flag==0){
        flag=1;
        cout<<p->data<<" ";
        Rdisplay(p->next);
    }
    flag=0;
}

int main(){
    int a[]={2,3,4,5,6};
    create(a,5);
    Rdisplay(head);

    return 0;
}