#include<iostream>
using namespace std;

void InsertionSort(int A[],int n){
    int j,x;
    for(int i=1;i<n;i++){
        j=i-1;
        x=A[i];
        while(j>=0 && A[j]>x){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}

void display(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    //int a[]={11,13,7,2,6,9,4,5,10,3};
    //int n=sizeof(a)/sizeof(a[0]);
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    InsertionSort(a,n);
    display(a,n);
    return 0;
}