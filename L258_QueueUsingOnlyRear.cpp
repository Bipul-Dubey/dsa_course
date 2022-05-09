#include<iostream>
using namespace std;

class Queue{
    private:
        int Max;
        int rear;
        int *a;
    public:
        Queue(){
            cout<<"enter size of Queue: ";
            cin>>Max;
            a=new int[Max];
            rear=-1;
        }
        bool isEmpty();
        bool isFull();
        void enqueue(int x);
        int dequeue();
        int front();
        void printAll();
};

bool Queue::isEmpty(){
    return rear==-1;
}
bool Queue::isFull(){
    return rear==Max-1;
}
void Queue::enqueue(int x){
    if(isFull()){
        cout<<"Overflow\n";
    }
    else{
        rear++;
        a[rear]=x;
        cout<<x<<" Enqueue\n";
    }
}

int Queue::dequeue(){
    if(isEmpty()){
        return -1;
    }
    else{
        int x=a[0];
        for(int i=0;i<rear-1;i++){
            a[i]=a[i+1];
        }
        rear--;
        return x;
    }
}

int Queue::front(){
    if(isEmpty())
        return -1;
    else
        return a[0];
}

void Queue::printAll(){
    if(isEmpty()){
        cout<<"Underflow";
    }
    else{
        cout<<"Front --> rear:\n";
        for(int i=0;i<=rear;i++){
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
}

int main(){
    Queue q;
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(51);
    q.enqueue(115);
    cout<<q.dequeue()<<endl;
    q.printAll();
    cout<<q.isEmpty()<<endl;
    cout<<q.isFull();
    return 0;
}