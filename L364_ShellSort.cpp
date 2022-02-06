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

void ShellSort(int A[],int n){
    int j,temp;
    for(int gap=n/2;gap>=1;gap/=2){
        for(int i=gap;i<n;i++){
            temp=A[i];
            j=i-gap;
            while(j>=0 && A[j]>temp){
                A[j+gap]=A[j];
                j=j-gap;
            }
            A[j+gap]=temp;
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
    ShellSort(a,n);
    display(a,n);
    return 0;
}