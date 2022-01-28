#include<iostream>
using namespace std;
int main(){
    int n=10;
    int a[n]={7,54,48,81,5,6,-1,4,88,6};
    int min=a[0];
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
        else{
            if(a[i]>max){
                max=a[i];
            }
        }
    }
    cout<<min<<"   "<<max;

    return 0;
}