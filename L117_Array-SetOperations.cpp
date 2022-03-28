#include<iostream>
using namespace std;

void SortedArrayUnion(int a[],int b[],int m,int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            cout<<a[i++]<<" ";
        }
        else if(a[i]>b[j]){
            cout<<b[j++]<<" ";
        }
        else{
            cout<<a[i++]<<" ";
            j++;
        }
    }
    while(i<m){
        cout<<b[j++]<<" ";
    }
    while(j<n){
        cout<<b[j++]<<" ";
    }
}


void SortedArrayIntersection(int a[],int b[],int m,int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            cout<<b[j++]<<" ";
            i++;
            
        }
    }
}

void SortedArrayDifference(int a[],int b[],int m,int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            cout<<a[i++]<<" ";
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    while(i<m){
        cout<<a[i++]<<" ";
    }
}

int Search(int a[],int length,int key){
    for(int i=0;i<length;i++){
        if(key==a[i]){
            return true;
        }
    }
    return false;
}
void UnsortedArrayUnion(int a[],int b[],int m,int n){
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    for(int j=0;j<n;j++){
        if(!Search(a,m,b[j])){
            cout<<b[j]<<" ";
        }
    }
}

void UnsortedArrayIntersection(int a[],int b[],int m,int n){
    for(int j=0;j<n;j++){
        if(Search(a,m,b[j])){
            cout<<b[j]<<" ";
        }
    }
}

void UnsortedArrayDifference(int a[],int b[],int m,int n){
    for(int j=0;j<n;j++){
        if(!Search(b,n,a[j])){
            cout<<a[j]<<" ";
        }
    }
}

int main(){
    int a[]={3,4,5,6,9,12};
    int b[]={2,4,5,7,12};
    int length_a=sizeof(a)/sizeof(a[0]);
    int length_b=sizeof(b)/sizeof(b[0]);
    // SortedArrayUnion(a,b,length_a,length_b);
    
    // SortedArrayIntersection(a,b,length_a,length_b);

    SortedArrayDifference(a,b,length_a,length_b);

    // UnsortedArrayUnion(a,b,length_a,length_b);

    // UnsortedArrayIntersection(a,b,length_a,length_b);

    // UnsortedArrayDifference(a,b,length_a,length_b);  // {a-b}
    return 0;
}