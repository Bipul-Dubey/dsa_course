#include<iostream>
using namespace std;

void insert(int A[],int n){
    int temp;
    int i=n;
    temp=A[i];
    while(i>1 && temp>A[i/2]){
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=temp;
}


int Delete(int A[],int n){
    int i,j,x,temp,val;
    val=A[1];
    x=A[n];
    A[1]=A[n];
    A[n]=val;
    i=1;j=i*2;
    while(j<=n-1){
        if(j<n-1 && A[j+1]>A[j])
            j=j+1;
        if(A[i]<A[j]){
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            i=j;
            j=2*j;
        }
        else
            break;
    }
    return val;
}

void create(int A[],int n){    
    for(int i=2;i<=n;i++){
        insert(A,i);
    }
}

void display(int A[],int n){
    for(int i=1;i<=n;i++){
        cout<<A[i]<<" ";
    }
}

void Heapsort(int A[],int n){
    for(int i=n;i>1;i--){
        Delete(A,i);
    }
}

int main(){
    int A[]={0,10,20,30,25,5,40,35};
    create(A,7);
    display(A,7);
    cout<<endl;
    Heapsort(A,7);
    cout<<endl;
    display(A,7);


    return 0;
}