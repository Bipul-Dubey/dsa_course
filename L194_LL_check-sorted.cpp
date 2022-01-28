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

int isSorted(struct Node *p){
    int x=INT16_MIN;
    while(p!=0){
        if(p->data<x){
            return 0;
        }
        x=p->data;
        p=p->next;
    }
    return 1;
}

int main(){
    int a[]={10,20,3,40,50,60};
    create(a,6);
    //display(head);
    if(isSorted(head)){
        cout<<"sorted";
    }
    else{
        cout<<"unsorted";
    }
    return 0;
}