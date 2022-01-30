#include<iostream>
using namespace std;

class Queue{
    private:
        int size;
        int front;
        int rear;
        int *Q;
    public:
        Queue(){
            front=-1;
            rear=-1;
            size=10;
            Q=new int[size];
        }
        Queue(int size){
            front=rear=-1;
            this->size=size;
            Q=new int[this->size];
        }
        void Enqueue(int x){
            if(rear==size-1){
                cout<<"Queue overflow\n";
            }
            else{
                rear++;
                Q[rear]=x;
                cout<<x<<" Inserted\n";
            }
        }
        int Dequeue(){
            int x=-1;
            if(front==rear){
                cout<<"Queue underflow\n";
            }
            else{
                x=Q[front+1];
                front++;
            }
            return x;
        }

    void peek(){
            if(front==rear){
                cout<<"Queue underflow";
            }
            else{
                cout<<"front element: "<<Q[front+1]<<endl;
            }
        }

        void display(){
            cout<<endl<<"Element present: ";
            for(int i=front+1;i<=rear;i++){
                cout<<Q[i]<<" ";
            }
            cout<<"\n";
        }
};

int main(){
    Queue q(5);
    q.Enqueue(10);
    q.Enqueue(11);
    q.Enqueue(12);
    q.Enqueue(13);
    cout<<q.Dequeue()<<" deleted\n";
    cout<<q.Dequeue()<<" deleted\n"; 
    q.display();   
    q.peek();

return 0;
}