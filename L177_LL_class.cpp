#include<iostream>
using namespace std;

class LL{
    public:
    struct Node{
        int data;
        struct Node *next;
    }*head;
        void create(int a[],int n);
        void display(struct Node *p);
        int count(struct Node *p);
        int Rcount(struct Node *p);
        int SumN(struct Node *p);
        int RSumN(struct Node *p);
        int MaxN(struct Node *p);
        int MinN(struct Node *p);
};

void LL::create(int a[],int n){
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

void LL::display(struct Node *p){
        while(p!=0){
            cout<<p->data<<" ";
            p=p->next;
        }
}

int LL::count(struct Node *p){
    int c=0;
    while(p!=0){
        c++;
        p=p->next;
    }
    return c;
}

int LL::Rcount(struct Node *p){
    if(p==0){
        return 0;
    }
    else{
        return Rcount(p->next)+1;
    }
}

int LL::SumN(struct Node *p){
    int sum=0;
    while(p){
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}

int LL::RSumN(struct Node *p){
    if(p==0){
        return 0;
    }
    else{
        return RSumN(p->next)+p->data;
    }
}

int LL::MaxN(struct Node *p){
    int max=INT32_MIN;
    while(p){
        if(p->data>max){
            max=p->data;
        }
        p=p->next;
    }    
    return max;
}

int LL::MinN(struct Node *p){
    int min=INT32_MAX;
    while(p!=0){
        if(p->data<min){
            min=p->data;
        }
        p=p->next;
    }
    return min;
}

int main(){
    LL l;
    int a[]={-10,2,3,45,5,6};
    l.create(a,6);
    l.display(l.head);
    cout<<endl<<l.Rcount(l.head);
    cout<<endl<<l.RSumN(l.head);
    cout<<endl<<l.MaxN(l.head);
    cout<<endl<<l.MinN(l.head);
    return 0;
}