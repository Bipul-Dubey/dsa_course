#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

class stacks{
    private:
        Node* top;
    public:
        stacks(){
            top=nullptr;
        }
        ~stacks(){
                Node* p=top;
                while(top){
                    top=top->next;
                    delete p;
                    p=top;
                }
        }
        void push(int x){
            Node *t=new Node;
            if(t==nullptr){
                cout<<"stack overflow\n";
            }
            else{
                t->data=x;
                t->next=top;
                top=t;                
            }
        }
        int pop(){
            Node *p;
            int x=-1;
            if(top==nullptr){
                cout<<"stack underflow\n";
            }
            else{
                p=top;
                x=p->data;
                top=top->next;
                delete p;
            }
            return x;
        }    
        int isFull(){
            Node *t=new Node;
            if(t==nullptr){
                delete t;
                return 1;
            }
            else{
                delete t;
                return 0;
            }
        }
        int isEmpty(){
            return top?0:1;
        }
        void display(){
            while(top!=NULL){
                cout<<" -> "<<top->data;
                top=top->next;
            } 
            cout<<endl;           
        }    
};

int main(){
    stacks st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(50);
    st.pop();
    st.display();
    cout<<st.isFull();
    cout<<endl<<st.isEmpty();
return 0;
}