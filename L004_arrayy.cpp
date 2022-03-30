#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<"\nsize of array is "<<sizeof(arr);
return 0;
}