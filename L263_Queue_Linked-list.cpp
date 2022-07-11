#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

class Queue{
    private:
        Node *front;
        Node *rear;
    public:
        Queue();
        ~Queue();
        bool isEmpty();
        bool isFull();
        void enqueue(int x);
        void dequeue();
        void display();
};

Queue::Queue(){
    front=NULL;
    rear=NULL;
}
Queue::~Queue(){
    Node *p=front;
    while(front){
        front=front->next;
        delete p;
        p=front;
    }
}
bool Queue::isEmpty(){
    return front==NULL;
}
bool Queue::isFull(){
    Node *t=new Node;
    if(t==NULL)
        return 1;
    return 0;
}
void Queue::enqueue(int x){
    Node *t=new Node;
    if(t==NULL){
        cout<<"Overflow\n";
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
        cout<<x<<" enqueue\n";
    }
}

void Queue::dequeue(){
    if(front==NULL){
        cout<<"Underflow\n";
    }
    else{
        int x=-1;
        Node *p;
        p=front;
        x=p->data;
        front=front->next;
        delete p;
        cout<<x<<" dequeue\n";
    }
}

void Queue::display(){
    Node *p;
    p=front;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main(){
    Queue q;
    cout<<q.isEmpty()<<endl;
    cout<<q.isFull()<<endl;
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);
    q.enqueue(35);
    q.dequeue();
    q.display();
    return 0;
}