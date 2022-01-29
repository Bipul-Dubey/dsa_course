//queue operations
//--enqueue -> insertion of element in last
//--dequeue-> deletion of element from front
//--isempty -> check empty or not
//--isfull -> check full or not
#include<iostream>
using namespace std;

struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q){
    q->front=q->rear=-1;
    cout<<"Enter size: ";
    cin>>q->size;
    q->Q=new int[q->size];
}

void Enqueue(struct Queue *q,int x){
    if(q->rear==q->size-1){
        cout<<"queue overflow\n";
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}

int Dequeue(struct Queue *q){
    int x=-1;
    if(q->rear==q->front){
        cout<<"Queue underflow";
    }
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}

int isEmpty(struct Queue q){
    if(q.rear==q.front){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct Queue q){
    if(q.rear==q.size-1){
        return 1;
    }
    return 0;
}

void display(struct Queue q){
    for(int i=q.front+1;i<=q.rear;i++){
        cout<<q.Q[i]<<" ";
    }
    cout<<"\n";
}


int main(){
    struct Queue q;
    create(&q);
    Enqueue(&q,10);
    Enqueue(&q,20);
    Enqueue(&q,30);
    Enqueue(&q,40);
    Dequeue(&q);
    Dequeue(&q);
    display(q);
    cout<<"\n"<<"full: "<<isFull(q);
    cout<<"\n"<<"Empty: "<<isEmpty(q);
return 0;
}