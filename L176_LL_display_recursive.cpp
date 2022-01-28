#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
}*first;

void create(int a[],int n){
    int i;
    struct Node *t,*last;
    first=new struct Node;
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++){
        t=new struct Node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}

void display(struct Node *p){
    if(p!=0){
        cout<<p->data<<" ";
        display(p->next);
    }
}

void Rdisplay(struct Node *p){
    if(p!=NULL){
        cout<<(p->data)<<" ";
        Rdisplay(p->next);
    }
}

int main(){
    int a[]={3,5,7,10,15};
    create(a,5);
    Rdisplay(first);
    return 0;
}