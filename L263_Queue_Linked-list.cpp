#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*front=0,*rear=0;

void Enqueue(int x){
    Node *t=new Node;
    if(t==NULL){
        cout<<"overflow\n";
    }
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL){
            front=rear=t;
        }
        else{
            rear->next=t;
            rear=t;
        }
        cout<<rear->data<<" inserted\n";
    }
}

int dequeue(){
    int x=-1;
    struct Node *p;
    if(front==0){
        cout<<"underflow";
    }
    else{
        p=front;
        front=front->next;
        x=p->data;
        delete p;
    }
    return x;
}

void peek(){
    if(front!=NULL){
        cout<<"front element: "<<front->data<<endl;
    }
    else{
        cout<<"Empty\n";
    }
}

void display(){
    if(front==0){
        cout<<"Empty\n";
    }
    else{
            do{
                cout<<front->data<<" ";
                front=front->next;
            }while(front!=NULL);
        cout<<endl;
    }
}

int isEmpty(){
    return (rear==0 && front==0);
}

int main(){
    struct Node q;
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);
    Enqueue(60);
    Enqueue(70);
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    peek();
    display();
    cout<<isEmpty();
return 0;
}