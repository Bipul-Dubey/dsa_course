#include<iostream>
using namespace std;

struct Stacks{
    int size;
    int top;
    int *s;
};

int isEmpty(struct Stacks st){
    if(st.top==-1){
        return 1;
    }
    return 0;
}

int isFull(struct Stacks st){
    if(st.top==st.size-1){
        return 1;
    }
    return 0;
}

void push(struct Stacks *st,int x){
    if(st->top==st->size-1){
        cout<<"stack overflow";
    }
    else{
        st->top++;
        st->s[st->top]=x;
    }
}

void pop(struct Stacks *st){
    if(st->top==-1){
        cout<<"stack underflow";
    }
    else{
        st->top--;
    }
}

int peek(struct Stacks st){
    if(st.top==-1){
        return -1;
    }
    else{
        return st.s[st.top];
    }
}

void displayStack(struct Stacks st){
    if(st.top==-1){
        cout<<"stack underflow";
    }
    else{
        for(int i=0;i<st.top+1;i++){
            cout<<st.s[i]<<" ";
        }
    }
}

int main(){
    struct Stacks st;
    cout<<"enter size of stack: ";
    cin>>st.size;
    st.s=new int[st.size];
    st.top=-1;
    push(&st,5);
    push(&st,3);
    push(&st,7);
    cout<<"<<--  ";
    //pop(&st);
    //cout<<peek(st);
    displayStack(st);
    cout<<endl;
    cout<<isEmpty(st);

return 0;
}