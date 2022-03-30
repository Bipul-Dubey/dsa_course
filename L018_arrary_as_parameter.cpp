#include<iostream>
using namespace std;

void readarr(int a[],int size){         //pass array as parmeter 
    cout<<"enter elements: ";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
}

void printarr(int *a,int size){             //pass array as parameter using pointer
    cout<<"elements: ";
    for(int i=0;i<size;i++){
        cout<<a[i]<<"   ";
    }
}

int main(){
        int n;
        cout<<"enter size of array: ";
        cin>>n;
        int arr[n];
        readarr(arr,n);
        printarr(arr,n);
 return 0;
}