#include<iostream>
using namespace std;

void SortedArrayDuplicate(int a[],int n){
    int j;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            j=i+1;
            while(a[j]==a[i]){
                j++;
            }
            cout<<a[i]<<" "<<j-i<<endl;
            i=j-1;
        }
    }
}

// find duplicate using Hash Table
void SortedArrayDuplicate2(int a[],int n){
    int h=a[n-1];
    int H[h+1]={0};
    for(int i=0;i<n;i++){
        H[a[i]]++;
    }
    for(int j=0;j<=h;j++){
        if(H[j]>1){
            cout<<j<<" "<<H[j]<<endl;
        }
    }
}

void UnsortedArrayDuplicate1(int a[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        count=1;
        if(a[i]!=-1){
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    count++;
                    a[j]=-1;
                }
            }
            if(count>1){
                cout<<a[i]<<" "<<count<<endl;
            }
        }
    }
}

int Max(int a[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}


// Find duplicate in unsorted using hash table
void UnsortedArrayDuplicate2(int a[],int n){
    int h=Max(a,n);
    int H[h+1]={0};
    for(int i=0;i<n;i++){
        H[a[i]]++;
    }
    for(int j=0;j<=h;j++){
        if(H[j]>1){
            cout<<j<<" "<<H[j]<<endl;
        }
    }
}

int main(){
    int a[]={3,5,6,7,7,8,8,9,10,11,11,20,20,20};
    int length=sizeof(a)/sizeof(a[0]);
    // SortedArrayDuplicate(a,length);

    // SortedArrayDuplicate2(a,length);

    int unsort[]={10,8,3,6,4,6,5,6,8,2,10,7};
    int unsort_len=sizeof(unsort)/sizeof(unsort[0]);

    UnsortedArrayDuplicate1(unsort,unsort_len);
    return 0;
}