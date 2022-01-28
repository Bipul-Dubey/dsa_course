#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x){
    struct Node *t;
    t=new struct Node;
    if(t==NULL){
        cout<<"stack overflow\n";
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
        cout<<x<<" pushed\n";
    }
}

int pop(){
    struct Node *p;
    int x=-1;
    if(top==NULL){
        cout<<"stack underflow\n";
    }
    else{
        p=top;
        top=top->next;
        x=p->data;
        delete p;
    }
    return x;
}

void peek(){
    if(top==NULL){
        cout<<"stack underflow\n";
    }
    else{
        cout<<"\ntop element: "<<top->data;
    }
}

int isEmpty(){
    if(top==NULL){
        return 1;
    }
    return 0;
}

int isFull(){
    if(top!=NULL){
        return 1;
    }
    return 0;
}

void display(){
    struct Node *p;
    p=top;
    cout<<"-> ";
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    cout<<pop()<<" poped";
    peek();
    cout<<"\n"<<isFull();
    cout<<"\n";
    display();
return 0;
}