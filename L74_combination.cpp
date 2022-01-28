//ncr=n!/(r!(n-r)!)
#include<iostream>
using namespace std;

int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int NCR(int n,int r){
    int nfact=fact(n);
    int rfact=fact(r);
    int nrfact=fact(n-r);
    int result=nfact/(rfact*(nrfact));
    return result;
}

int main(){

    cout<<NCR(10,4);

    return 0;
}