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