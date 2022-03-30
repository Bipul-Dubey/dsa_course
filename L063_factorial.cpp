//factorial using recursion
#include<iostream>
using namespace std;

double fact(double n){
    if(n<=0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }    
    return f;
}

int main(){

    double factn=fact(1);
    cout<<factn<<endl;
    int f=factorial(5);
    cout<<f;
    return 0;
}