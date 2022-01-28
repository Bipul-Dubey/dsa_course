#include<iostream>
using namespace std;

#define Size 5
class stacks{
    int top=-1;
    int arr[Size];
    public:
        void push(int x){
            if(top==Size-1){
                cout<<"stack overflow";
            }
            else{
                top++;
                arr[top]=x;
                cout<<x<<" inserted\n";
            }
        }
        void pop(){
            if(top==-1){
                cout<<"stack underflow";
            }
            else{
                int a=arr[top];
                top--;
                cout<<a<<" poped\n";
            }
        }
        int peek(){
            if(top==-1){
                cout<<"stack underflow";
                return 0;
            }
            else{
                int a=arr[top];
                cout<<a<<" top element";
            }
        }
        int isempty(){
            if(top==-1){
                return 1;
            }
            return 0;
        }
        int isfull(){
            if(top==Size-1){
                return 1;
            }
            return 0;
        }
        void displayEle(){
            if(isempty()){
                cout<<"stack is empty";
            }
            else{
                cout<<"first <- ";
                for(int i=0;i<top+1;i++){
                    cout<<arr[i]<<" <- ";
                }
            }
        }
};

int main(){
    stacks st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<"\n"<<st.isfull();
    cout<<"\n"<<st.isempty();
    cout<<"\n";
    st.displayEle();


return 0;
}