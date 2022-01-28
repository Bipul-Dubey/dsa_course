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


int precedence(char x){
    if(x=='+'||x=='-'){
        return 1;
    }
    else if(x=='*'||x=='/'){
        return 2;
    }
    else{
        return 0;
    }
}

int isOperand(char x){
    if(x=='+'||x=='-'||x=='*'||x=='/'){
        return 0;
    }
    else{
        return 1;
    }
}

char * IntoPost(char *infix){
    char *postfix;
    int i=0;
    int j=0;
    int len=strlen(infix);
    postfix=new char[len+1];
    while(infix[i]!='\0'){
        if(isOperand(infix[i])){
            postfix[j++]=infix[i++];
        }
        else{
            if(precedence(infix[i])>precedence(top->data)){
                push(infix[i++]);
            }
            else{
                postfix[j++]==pop();
            }
        }
    }
    while(top!=NULL){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    return postfix;

}

int main(){
    char infix[]="a+b*c";
    push('#');
    char *postfix=IntoPost(infix);
    cout<<postfix<<endl;
return 0;
}