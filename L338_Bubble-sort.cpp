#include<iostream>
using namespace std;

void Swap(int* x, int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void BubbleSort(int A[],int n){
    int flag;
    for(int i=0;i<n-1;i++){
        flag=0;
        for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                Swap(&A[j],&A[j+1]);
                flag=1;
            }
        }
    }
    if (flag==0){
        return;
    }
}

void display(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    //int a[]={3,7,9,10,6,5,12,4,11,2};
    //int n=sizeof(a)/sizeof(a[0]);
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    BubbleSort(a,n);
    display(a,n);
return 0;
}