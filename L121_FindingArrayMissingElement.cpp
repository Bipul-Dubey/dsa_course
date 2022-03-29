#include<iostream>
using namespace std;

int FindMissingEleMet1(int a[],int num){
    int sum=0;
    for(int i=0;i<num;i++){
        sum+=a[i];
    }
    int n=num+1;
    int sumNatural=(n*(n+1))/2;
    return sumNatural-sum;
}

void FindMissingEleMet2(int a[],int n){
    int l,diff;
    diff=a[0]-0;
    for(int i=0;i<n;i++){
        if(a[i]-i!=diff){
            cout<<diff+i<<endl;
            break;
        }
    }
}

void FindMultiMissingEle(int a[],int n){
    int diff=a[0]-0;
    for(int i=0;i<n;i++){
        if(a[i]-i!=diff){
            while(diff<a[i]-i){
                cout<<diff+i<<" ";
                diff++;
            }
        }
    }
}

int Max(int a[],int n){
    int max=INT32_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}

int Min(int a[],int n){
    int min=INT32_MAX;
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    return min;
}

void FindMissingEleUnsorted(int a[],int n){
    int l=Min(a,n);
    int h=Max(a,n);
    int H[h]={0};
    for(int i=0;i<n;i++){
        H[a[i]]++;
    }
    for(int j=l;j<h;j++){
        if(H[j]==0){
            cout<<j<<" ";
        }
    }
}

int main(){
    int a[]={3,7,4,9,12,6,16,1,11,2,10};
    int length=sizeof(a)/sizeof(a[0]);
    // cout<<FindMissingEleMet1(a,length);

    // FindMissingEleMet2(a,length);

    // FindMultiMissingEle(a,length);
   
    FindMissingEleUnsorted(a,length);
    return 0;
}