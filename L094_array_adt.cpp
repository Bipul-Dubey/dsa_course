#include<iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};
void display(struct Array arr){
    cout<<"elements: ";
        for(int i=0;i<arr.length;i++){
            cout<<arr.A[i]<<"  ";
        }
}
int main(){
    struct Array arr;
    cout<<"enter size: ";
    cin>>arr.size;
    arr.A=new int[arr.size];
   

    int n;
    cout<<"enter length of array: ";
    cin>>n;
    cout<<"enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr.A[i];
    }
    arr.length=n;
    display(arr);
    return 0;
}