//sum of n natural number using recursion
#include<iostream>
using namespace std;
int addN(int n){
    if(n>0){
        return addN(n-1)+n;
    }
    else{
        return 0;
    }
}
int main(){

    int sum=addN(5);
    cout<<sum;
    return 0;
}