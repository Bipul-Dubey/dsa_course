#include<iostream>
using namespace std;

int add(int x, int y){
    return x+y;
}

int multipy(int a , int b){
    
    return a*b;
}

int main(){
    int a=5,b=10,c;
    c=add(a,b);
    cout<<c<<endl;

    int x=5,y=6;
    int z=multipy(x,y);
    cout<<z<<endl;

    return 0;
}