//simple example
#include<iostream>
using namespace std;

void fun1(int x){
    if(x>0){
        cout<<x<<"  ";
        fun1(x-1);
    }
}

void fun2(int x){
    if(x>0){
        fun2(x-1);
        cout<<x<<"  ";
    }
}

int main(){
    fun1(4);
    cout<<endl;
    fun2(4);
    return 0;
}