#include<iostream>
using namespace std;

void Swap(int* x, int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int Partition(int A[],int low,int high){
    int pivot=A[low];
    int i=low,j=high;
    do{
        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);
        if(i<j){
            Swap(&A[i],&A[j]);            
        }
    }while(i<j);
    Swap(&A[low],&A[j]);
    return j;
}

void Quicksort(int A[],int low,int high){
    if(low<high){
        int pi=Partition(A,low,high);
        Quicksort(A,low,pi);
        Quicksort(A,pi+1,high);
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
    Quicksort(a,0,n);
    display(a,n);
    return 0;
}