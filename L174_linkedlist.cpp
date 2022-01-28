#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
}*head;

void create(int a[],int n){
    struct Node *first,*last;
    head=new struct Node;
    head->data=a[0];
    head->next=NULL;
    last=head;
    for(int i=1;i<n;i++){
        first=new struct Node;
        first->data=a[i];
        first->next=NULL;
        last->next=first;
        last=first;
    }

}

void display(struct Node *p){
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int Count(struct Node *p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}

int SumN(struct Node *p){
    int sum=0;
    while(p){
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}

int MaxN(struct Node *p){
    int max=INT32_MIN;
    while(p){
        if(p->data>max){
            max=p->data;
        }
        p=p->next;
    }    
    return max;
}

int MinN(struct Node *p){
    int min=INT32_MAX;
    while(p!=0){
        if(p->data<min){
            min=p->data;
        }
        p=p->next;
    }
    return min;
}

struct Node * RSearch(struct Node *p,int key){
    if(p==NULL){
        return 0;
    }
    if(key==p->data){
        return p;
    }
    else{
        return RSearch(p->next,key);
    }
}

struct Node * MHsearch(struct Node *p,int key){
    Node *q=NULL;
    while(p!=0){
        if(key==p->data){
            q->next=p->next;
            p->next=head;
            head=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return 0;
}

void Insert(struct Node *p,int index,int x){
    struct Node *t;
    if(index<0||index>Count(p)){
        return;
    }
    t=new struct Node;
    t->data=x;
    if(index==0){
        t->next=head;
        head=t;
    }
    else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }       
        t->next=p->next;  
        p->next=t;       
    }
}

void SortInsert(struct Node *p,int x){          //insert in sorted list
    struct Node *first,*q=NULL;
    first=new struct Node;
    first->data=x;
    first->next=NULL;
    if(head==NULL){
        head=first;
    }
    else{
        while(p && p->data<x){
            q=p;
            p=p->next;
        }
        if(p==head){
            first->next=head;
            head=first;                        
        }
        else{
            first->next=q->next;
            q->next=first;
        }
    }
}

int deleteEle(struct Node *p,int index){
    struct Node *q;
    int x=-1;
    if(index<1||index>Count(p)){
        return -1;
    }
    if(index==1){
            q=head;
            x=head->data;
            head=head->next;
            delete q;
            return x;
        }
    else{
        for(int i=0;i<index-1;i++){
                q=p;
                p=p->next;
            }
            q->next=p->next;
            x=p->data;
            delete p;
            return x;
        }
}

int isSorted(struct Node *p){
    int x=INT16_MIN;
    while(p!=0){
        if(p->data<x){
            return 0;
        }
        x=p->data;
        p=p->next;
    }
    return 1;
}

void ReverseDuplicate(struct Node *p){
    struct Node *q=p->next;
    while(q!=0){
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}

void Reverse1(struct Node *p){
    int *a,i=0;
    a=new int[Count(p)];
    struct Node *q=p;
    while(q){
        a[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q){
        q->data=a[i];
        q=q->next;
        i--;
    }
}

void Sreverse(struct Node *p){  //reverse using slider pointer
    struct Node *q=0,*r=0;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
}

void RecReverse(struct Node *q,struct Node *p){
    if(p){
        RecReverse(p,p->next);
        p->next=q;
    }
    else{
        head=q;
    }
}

int main(){
    int n;
    cout<<"how many elements: ";
    cin>>n;
    int a[n];
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    create(a,n);
    display(head);
    return 0;
}