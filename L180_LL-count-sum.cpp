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
     if(p!=0){
         cout<<p->data<<" ";
         display(p->next);
     }
 }

int SumN(struct Node *p){
    int sum=0;
    while(p){
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}

int RSumN(struct Node *p){
    if(p==0){
        return 0;
    }
    else{
        return RSumN(p->next)+p->data;
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

int Rcount(struct Node *p){
    if(p==0){
        return 0;
    }
    else{
        return Rcount(p->next)+1;
    }
}

int main(){
    int a[]={1,4,7,4,34,2};
    create(a,6);
    display(head);
    cout<<endl;
    cout<<RSumN(head);
    cout<<endl;
    cout<<Rcount(head);
    return 0;
}