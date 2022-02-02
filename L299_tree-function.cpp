// tree creation by linked using Queue
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Node{
    public:
        Node *lchild;
        int data;
        Node *rchild;
        Node(){};
        Node(int data);
};

Node::Node(int data){
    lchild=nullptr;
    this->data=data;
    rchild=nullptr;
}

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
        int searchInorder(int inarray[],int InStart,int inEnd,int data);
        Node* Generatefromtraversal(int *inorder,int *preorder,int inStart,int inEnd);
};

void Tree::createTree(){
    Node *p,*t;
    int x;
    queue<Node*>q;
    cout<<"Enter root value: ";
    cin>>x;
    root->data=x;
    root->lchild=root->rchild=NULL;
    q.emplace(root);
    while(!q.empty()){
        p=q.front();
        q.pop();
        cout<<"Enter left child of "<<p->data<<" : ";
        cin>>x;
        if(x!=-1){
            t=new Node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            q.emplace(t);
        }
        cout<<"Enter right child of "<<p->data<<" : ";
        cin>>x;
        if(x!=-1){
            t=new Node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            q.emplace(t);
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
    queue<Node*> q;
    q.emplace(p);
    while(!q.empty()){
        p=q.front();
        q.pop();
        if(p->lchild){
            cout<<root->lchild->data<<" ";
            q.emplace(root->lchild);
        }
        if(root->lchild){
            cout<<root->rchild->data<<" ";
            q.emplace(root->rchild);
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

int Tree::searchInorder(int inarray[],int InStart,int inEnd,int data){
    for(int i=InStart;i<=inEnd;i++){
        if(inarray[i]==data){
            return i;
        }
    }
    return -1;
}

Node* Tree::Generatefromtraversal(int *inorder,int *preorder,int inStart,int inEnd){
    static int preIndex=0;
    if(inStart>inEnd){
        return nullptr;
    }
    Node* node=new Node(preorder[preIndex++]);
    if(inStart==inEnd){
        return node;
    }
    int splitIndex=searchInorder(inorder,inStart,inEnd,node->data);
    node->lchild=Generatefromtraversal(inorder,preorder,inStart,splitIndex-1);
    node->rchild=Generatefromtraversal(inorder,preorder,splitIndex-1,inEnd);
    return node;
}



int main(){
    Tree T;
    int preoder[]={4,7,9,6,3,2,5,8,1};
    int inorder[]={7,6,9,3,4,5,8,2,1};

    Node* bt=T.Generatefromtraversal(inorder,preoder,0,9);
    T.Preorder(bt);

return 0;
}