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
        first->next=0;
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

int length(struct Node *p){
    int len=0;
    while(p){
        len++;
        p=p->next;
    }
    return len;
}

int middle(struct Node *p){
    int mid=length(p)/2;
    for(int i=0;i<mid;i++){
        p=p->next;
    }
    return p->data;
}

int main(){
    int a[]={1,2,3,4,5};
    create(a,5);
    display(head);
    //cout<<endl<<length(head);
    cout<<endl;
    cout<<middle(head);    
    return 0;
}