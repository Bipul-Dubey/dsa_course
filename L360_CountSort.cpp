#include<iostream>
using namespace std;

int FindMax(int A[],int n){
    int max=INT32_MIN,i=0;
    while(i<n){
        if(A[i]>max){
            max=A[i];
        }
        i++;
    }
    return max;
}

void CountSort(int A[],int n){
    int max,i;
    max=FindMax(A,n);
    int c[max+1];
    for(i=0;i<=max+1;i++){
        c[i]=0;
    }
    for(i=0;i<n;i++){
        c[A[i]]++;
    }
    i=0; 
    int j=0;
    while(i<max+1){
        if(c[i]>0){
            A[j++]=i;
            c[i]--;
        }
        else{
            i++;
        }
    }
}


void display(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    CountSort(a,n);
    display(a,n);
    return 0;
}