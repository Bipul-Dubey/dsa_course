// tree creation by linked using Queue
#include<iostream>
using namespace std;

class Node{
    public:
        Node *lchild;
        int data;
        Node *rchild;
};

class Queue{
    private:
        int size;
        int front;
        int rear;
        Node **Q;
    public:
        Queue(){
            size=10;
            front=-1;
            rear=-1;
            Q=new Node*[size];
        }
        Queue(int size){
            front=-1;
            rear=-1;
            this->size=size;
            Q=new Node*[size];
        }
        void Enqueue(Node *x){
            if(rear==size-1){
                cout<<"Queue overflow\n";
            }
            else{
                rear++;
                Q[rear]=x;
            }
        }
        Node* Dequeue(){
            Node* x=NULL;
            if(front==rear){
                cout<<"Queue underflow\n";
            }
            else{
                x=Q[front+1];
                front++;
            }
            return x;
        }
        int isEmpty(){
            return front==rear;
        }
};

class Tree{
    public:
        Node *root;
        Tree(){
             root=NULL;           
        }
        void createTree();
        void Preorder(Node *p);
        void Inorder(Node *p);
        void Postorder(Node *p);
        void Levelorder(Node *p);
        int Height(Node *root);
};

void Tree::createTree(){
    Node *p,*t;
    int x;
    Queue q(100);
    cout<<"Enter root value: ";
    cin>>x;
    root=new Node;
    root->data=x;
    root->lchild=root->rchild=NULL;
    q.Enqueue(root);
    while(!q.isEmpty()){
        p=q.Dequeue();
        cout<<"Enter left child of "<<p->data<<" : ";
        cin>>x;
        if(x!=-1){
            t=new Node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            q.Enqueue(t);
        }
        cout<<"Enter right child of "<<p->data<<" : ";
        cin>>x;
        if(x!=-1){
            t=new Node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            q.Enqueue(t);
        }
    }
}

void Tree::Preorder(Node *p){
    if(p){
        cout<<p->data<<" ";
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void Tree::Inorder(Node *p){
    if(p){
        Inorder(p->lchild);
        cout<<p->data<<" ";
        Inorder(p->rchild);
    }
}

void Tree::Postorder(Node *p){
    if(p){
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout<<p->data<<" ";
    }
}

void Tree::Levelorder(Node *p){
    Queue q(100);
    q.Enqueue(root);
    while(!q.isEmpty()){
        root=q.Dequeue();
        if(root->lchild){
            cout<<root->lchild->data<<" ";
            q.Enqueue(root->lchild);
        }
        if(root->lchild){
            cout<<root->rchild->data<<" ";
            q.Enqueue(root->rchild);
        }
    }
}

int Tree::Height(Node *root){
    int x=0;
    int y=0;
    if(root==0){
        return 0;
    }
    x=Height(root->lchild);
    x=Height(root->rchild);
    if(x>y){
        return x+1;
    }
    else{
        return y+1;
    }
}

int main(){
    Tree T;
    T.createTree();
    cout<<"\nPreorder: ";
    T.Preorder(T.root);
    cout<<"\nInorder: ";
    T.Inorder(T.root);
    cout<<"\nPostorder: ";
    T.Postorder(T.root);
return 0;
}