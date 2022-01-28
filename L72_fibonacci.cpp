#include<iostream>
using namespace std;
void fib(int n){        //print fibonacci series using loop
    if(n==0||n==1){
        cout<<n;
    }
    else{
        int t0=0,t1=1,s;
        
        for(int i=2;i<=n;i++){
            cout<<t0<<" ";
            s=t0+t1;
            t0=t1;
            t1=s;
        }
    }
}

int addfib(int n){              //sum of fib series using loop
     if(n==0||n==1){
        return n;
    }
    else{
        int t0=0,t1=1,s;
        
        for(int i=2;i<=n;i++){
            s=t0+t1;
            t0=t1;
            t1=s;
        }
        return s;
    }
}
int rfibseries(int n){
    if(n==0||n==1){
        return n;
    }
    else{
        return rfibseries(n-2)+rfibseries(n-1);
    }
}


int rfibadd(int n){
    if(n==0||n==1){
        return n;
    }
    else{
        return rfibadd(n-2)+rfibadd(n-1);
    }
}



int main(){
    int n=10;
    cout<<"     using loop     \n";
    fib(n);
    cout<<"\nadd of this fib: ";
    cout<<addfib(n);
    cout<<"\n     using recursion     \n";
    for(int i=0;i<n;i++)
             cout<<rfibseries(i)<<" ";
    cout<<"\nadd of this fib: ";
    cout<<rfibadd(n);
    return 0;
}