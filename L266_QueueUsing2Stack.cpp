#include<iostream>
#include<stack>
using namespace std;

class Queue{
    private:
        stack<int> s1,s2;
    public:
        void enqueue(int x);
        void dequeue();
};

void Queue::enqueue(int x){
    s1.push(x);
    cout<<x<<" enqueue\n";
}
void Queue::dequeue(){
    int x=-1;
    if(s2.empty()){
        if(s1.empty()){
            cout<<"Underflow\n";
            return;
        }
    }
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    x=s2.top();
    s2.pop();
    cout<<x<<" dequeue\n";
}

int main(){
    Queue q;
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);
    q.dequeue();
    q.dequeue();
    return 0;
}