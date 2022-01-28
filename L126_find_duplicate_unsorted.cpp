#include<iostream>
using namespace std;
int max(int a[],int n){
    int max=a[0];
    for(int i=0;i<n-1;i++){
        if(a[i]>max){
            max=a[i];
        }        
    }
    return max;
}
int main(){
    int n=10;
    int a[n]={8,3,6,4,6,5,6,8,2,7};
    int m=max(a,n);
    int h[m+1]={0};
    for(int i=0;i<n;i++){
        h[a[i]]++;
    }
    for(int i=0;i<m+1;i++){
        if(h[i]>1){
            cout<<i<<" "<<h[i]<<endl;
        }
    }
    return 0;    
}