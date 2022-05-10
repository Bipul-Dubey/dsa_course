#include<iostream>
#include<string>
#include<stack>
using namespace std;
    
bool isOperand(char x){
    if(x=='-'||x=='+'||x=='*'||x=='/'){
        return 0;
    }
    return 1;
}
    
int pre(char x){
    if(x=='-'||x=='+')
        return 1;
    else if(x=='*'||x=='/')
        return 2;
    else 
        return 0;
}
    
void convert(string infix){
    stack<char> st;
    int i=0,j=0;
    string result="";
    result.resize(infix.size());            // size of result/postfix string is must equal to infix string
    while(i<infix.length()){
        if(isOperand(infix[i])){
            result[j++]=infix[i++];
        }
        else{
            if(st.empty() || (infix[i])>pre(st.top())){
                st.push(infix[i++]);
            }
            else{
                result[j++]=st.top();
                st.pop();
            }
        }
    }
    while(!st.empty()){
        result[j++]=st.top();
        st.pop();
    }
    cout<<result<<endl;
}
    
int main(){
    convert("a+b*c/d");
    return 0;
}