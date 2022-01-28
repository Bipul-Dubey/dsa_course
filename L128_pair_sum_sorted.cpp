#include<iostream>
using namespace std;
int main(){
    int n=10;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int k=5;
    int i=0;
    int j=n-1;
    while(i<j){
        if((a[i]+a[j])==k){
            cout<<a[i]<<" + "<<a[j]<<" = "<<k<<endl;
            i++;
            j++;
        }
        else if((a[i]+a[j])<k){
            i++;
        }
        else if((a[i]+a[j])>k){
            j--;
        }
    }
    return 0;
}