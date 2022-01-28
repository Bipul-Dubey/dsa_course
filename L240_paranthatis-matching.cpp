#include<iostream>
#include<string.h>
using namespace std;

struct Node{
    char data;
    struct Node *next;
}*top=NULL;

void push(char x){
    struct Node *t;
    t=new struct Node;
    if(t==NULL){
        cout<<"stack overflow\n";
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

char pop(){
    struct Node *p;
    char x=-1;
    if(top==NULL){
        cout<<"stack underflow\n";
    }
    else{
        p=top;
        top=top->next;
        x=p->data;
        delete p;
    }
    return x;
}


int isBalanced(char *exp){
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='('){
            push(exp[i]);
        }
        else if(exp[i]==')'){
            if(top==NULL){
                return 0;
            }
            else{
                pop();
            }
        }
    }
    if(top==NULL)
        return 1;
    else
        return 0;
}

int main(){
    char *exp="((a+b)*(c-d))";
    if(isBalanced(exp)){
        cout<<"\nExpresion is balanced\n\n";
    }
    else{
        cout<<"\nExpresion is NOT balanced\n";        
    }
return 0;
}