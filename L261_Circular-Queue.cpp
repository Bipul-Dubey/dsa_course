#include<iostream>
using namespace std;

struct Queue{
    int size;
    int front;
    int rear;
    int *S;
};

void create(struct Queue *q){
    q->front=q->rear=0;
    q->size=4;
    q->S=new int[q->size];
}

void Enqueue(struct Queue *q,int x){
    if((q->rear+1)%q->size==q->front){
        cout<<"Queue overflow\n";
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q-> S[q->rear]=x;
    }
}

int Dequeue(struct Queue *q){
    int x=-1;
    if(q->front==q->rear){
        cout<<"Queue underflow\n";
    }
    else{
        q->front=(q->front+1)%q->size;
        x=q->S[q->front];
    }
    return x;
}

void display(struct Queue q){
    int i=q.front+1;
    do{
        cout<<q.S[i]<<" ";
        i=(i+1)%q.size;        
    }while(i!=(q.rear+1)%q.size);
    cout<<"\n";
}


int main(){
    struct Queue q;
    create(&q);
    Enqueue(&q,10);
    Enqueue(&q,20);
    Enqueue(&q,30);
    Enqueue(&q,40);
    Enqueue(&q,50);
    Dequeue(&q);
    display(q);
return 0;
}