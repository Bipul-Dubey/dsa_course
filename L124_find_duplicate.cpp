//find duplicate and its count its count ---sorted array
#include<iostream>
using namespace std;
int main(){
    int n=11;
    int a[n]={3,6,8,8,10,12,15,15,15,20};
    /*int lastduplicate=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1] && a[i]!=lastduplicate){
            cout<<a[i]<<" ";
            lastduplicate=a[i];
        }
    }   */
    
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            int j=i+1;
            while(a[j]==a[i]){
                j++;
            }
            cout<<a[i]<<" "<<(j-i)<<endl;
            i=j-1;
        }
    }

    return 0;
}