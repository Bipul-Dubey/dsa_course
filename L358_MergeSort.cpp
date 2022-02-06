#include<iostream>
using namespace std;

void Swap(int* x, int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void Merge(int A[],int l,int mid,int h){
    int i,j,k;
    int B[h+1];
    i=l;
    j=mid+1;
    k=l;
    while(i<=mid && j<=h){
        if(A[i]<A[j]){
            B[k++]=A[i++];
        }
        else{
            B[k++]=A[j++];
        }
    }   
    for(;i<=mid;i++){
        B[k++]=A[i];
    }
    for(;j<=h;j++){
        B[k++]=A[j];
    }
    for(int i=l;i<=h;i++){
        A[i]=B[i];
    }
}

void IMergeSort(int A[],int n){
    int p,i,l,mid,h;
    for(p=2;p<=n;p=p*2){
        for(i=0;i+p-1<n;i=i+p){
            l=i;
            h=i+p-1;
            mid=((l+h)/2);
            Merge(A,l,mid,h);
        }
    }
    if(p/2<n){
        Merge(A,0,p/2-1,n);
    }
}

void RecMergeSort(int A[],int l,int h){
    int mid=0;
    if(l<h){
        mid=((l+h)/2);
        RecMergeSort(A,l,mid);
        RecMergeSort(A,mid+1,h);
        Merge(A,l,mid,h);
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
    //IMergeSort(a,n);
    RecMergeSort(a,0,n);
    display(a,n);
    return 0;
}