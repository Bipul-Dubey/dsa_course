#include<iostream>
using namespace std;

class Node{
    public:
        Node *lchild;
        int data;
        Node *rchild;
};

class BST{
    private:
        Node *root;
    public:
        BST(){root=nullptr;}
        Node* getroot(){return root;}
        void insert(int key);
        void Inorder(Node *p);
        Node *search(int key);
};

void BST::insert(int key){
    Node *t=root;
    Node *p;
    Node *r;
    // if root is empty  
    if(root==nullptr){
        p=new Node;
        p->data=key;
        p->lchild=p->rchild=nullptr;
        root=p;
        return;
    }
    while(t!=nullptr){
        r=t;
        if(key<t->data){
            t=t->lchild;
        }
        else if(key>t->data){
            t=t->rchild;
        }
        else{
            return;
        }
    }    
    // Now t point at NULL and r point at insert location
    p=new Node;
    p->data=key;
    p->lchild=p->rchild=nullptr;
    if(key<r->data){
        r->lchild=p;
    }
    else{
        r->rchild=p;
    }
}

void BST::Inorder(Node *p){
    if(p){
        Inorder(p->lchild);
        cout<<p->data<<" ";
        Inorder(p->rchild);
    }
}

Node* BST::search(int key){
    Node* t=root;
    while(t!=nullptr){
        if(key==t->data){
            return t;
        }
        else if(key<t->data){
            t=t->lchild;
        }
        else{
            t=t->rchild;
        }
    }
    return nullptr;    
}

int main(){
    BST bs;
    bs.insert(10);
    bs.insert(20);
    bs.insert(5);
    bs.insert(15);
    bs.Inorder(bs.getroot());
return 0;
}