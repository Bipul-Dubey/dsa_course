#include<iostream>
using namespace std;

void Swap(int* x, int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void SelectionSort(int A[],int n){
    int i,j,k;
    for(i=0;i<n-1;i++){
        for(j=k=i;j<n;j++){
            if(A[j]<A[k]){
                k=j;
            }
        }
        Swap(&A[i],&A[k]);
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

    SelectionSort(a,n);
    display(a,n);
    return 0;
}